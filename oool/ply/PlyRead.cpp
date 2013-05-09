/*
  PlyRead.cpp - 

  author:ncaq
  mail:nyrigadake38@gmail.com
  time:Thu Apr 25 14:38:36 2013
*/
#include "PlyRead.hpp"

namespace oool
{
	namespace ply
	{
		std::string readfile(const std::string& filename)
		{
			std::ifstream ifs(filename);
			std::string data;
			std::string buf;
			while(std::getline(ifs,buf))
			{
				data += buf += "\n";//や っ つ け
			}
			return data;
		}

		std::vector<std::string> readLine(const std::string& text)
		{
			std::vector<std::string> file_line;
			std::string::size_type r = 0;
			for(unsigned int l = 0;true;l = ++r)//無限ループのため注意
			{
				r = text.find("\n", l);
				file_line.push_back(text.substr(l,r-l));//行頭から改行までコピー
				if(r == std::string::npos)//改行が無くなったらbreakする
				{
					break;
				}
			}
			return file_line;
		}

		//定数はグローバルでもstaticでも良いというのが自分のルール,ただし名前はちゃんとつけよう
		const boost::regex WHITELINE("^\\s*$");//空行
		const boost::regex COMMENTLINE("^comment.*");//コメント行
		std::vector<std::string> commentAndWhiteDelete(const std::vector<std::string>& input)
		{
			std::vector<std::string> a = input;//出来るだけ函数型スタイルにする.効率が多少悪くなろうとも
			for(auto i = a.begin();i != a.end();++i)
			{
				if(boost::regex_match(*i,WHITELINE)||boost::regex_match(*i,COMMENTLINE))
				{
					i = a.erase(i);
					--i;
				}
			}
			return a;
		}
		
		const std::string END_HEADER("end_header");
		oool::ply::PlyTags divideHeadData(const std::vector<std::string>& ply)
		{
			auto state = find(ply.begin(),ply.end(),END_HEADER);
			if(state == ply.end())
			{
				std::cerr << "error data" << std::endl;
				for(auto i:ply)
				{
					std::cerr << i << std::endl;
				}
				throw std::runtime_error("oool error.Is ply file as ply file?This program can't found end_header.");
			}
			std::vector<std::string> head;
			std::copy(ply.begin()	,state		,std::back_inserter(head));
			std::vector<std::string> data;
			std::copy(state		,ply.end()	,std::back_inserter(data));
			return PlyTags(head,data);//うーん効率悪い
		}

		const boost::regex PROPERTY("^property.*");
		std::vector<std::string> killProperty(const std::vector<std::string>& input)
		{
			std::vector<std::string> output;
			for(auto i:input)
			{
				if(boost::regex_match(i,PROPERTY))
				{
					output.push_back(i);
				}
			}
			return output;
		}

		const boost::regex ASCII	("^format ascii.*");
		const boost::regex LITTLE	("^format binary_little_endian.*");
		const boost::regex BIG		("^format binary_big_endian.*");
		oool::ply::Format formatParse(const std::vector<std::string>& input)
		{
			for(auto i:input)
			{
				if(boost::regex_match(i,ASCII))
				{
					return oool::ply::Format::ASCII;
				}
				if(boost::regex_match(i,LITTLE))
				{
					return oool::ply::Format::LITTLE;
				}
				if(boost::regex_match(i,BIG))
				{
					return oool::ply::Format::BIG;
				}
			}
			throw std::runtime_error("oool error unknown format.");
		}

		const boost::regex VERTEX_NUM_POS("^element vertex ");
		int vertexParse(const std::vector<std::string>& input)
		{
			boost::smatch m;
			for(auto i:input)
			{
				if(boost::regex_search(i,m,VERTEX_NUM_POS))
				{
					int rl = m.position() + m.length();
					std::string n = i.substr(rl,i.size());
					return boost::lexical_cast<int>(n);
				}
			}
			throw std::runtime_error("oool can't found vertex num");
		}

		const boost::regex FLOAT("^property float$");
		const boost::regex UCHAR("^property uchar$");
		const boost::regex INT  ("^property int$");
		PropertyDataType stringToDataType(const std::string& input)
		{
			if(boost::regex_match(input,FLOAT))
			{
				return PropertyDataType::FLOAT;
			}
			if(boost::regex_match(input,UCHAR))
			{
				return PropertyDataType::UCHAR;
			}
			if(boost::regex_match(input,INT))
			{
				return PropertyDataType::INT;
			}
			throw std::runtime_error("oool this ply file not support!");
		}
	}
} // oool
