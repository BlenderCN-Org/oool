//Kill.cpp - 
//author:,mail:nyrigadake38@gmail.com,time:Thu May 16 04:14:17 2013
#include "Kill.hpp"
namespace oool
{
	namespace ply
	{
		//定数はグローバルでもstaticでも良いというのが自分のルール,ただし名前はちゃんとつけよう
		const boost::regex WHITELINE("^\\s*$");//空行
		const boost::regex COMMENTLINE("^comment.*");//コメント行
		std::vector<std::string> deleteCommentAndWhite(const std::vector<std::string>& input)
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
		oool::ply::Tags divideHeadData(const std::vector<std::string>& ply)
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
			return Tags(head,data);//うーん効率悪い
		}

		const boost::regex ELEMENT("^element.*");
		std::vector<std::vector<std::string>> killElements(const std::vector<std::string>& input)
		{
			std::vector<std::vector<std::string>> output;
			auto lpoint = input.begin();
			auto rpoint = input.begin();
			for(auto it=input.begin();it != input.end();++it)
			{
				if(boost::regex_match(*it,ELEMENT))
				{
					if(lpoint == rpoint)
					{
						lpoint = it;
					}
					else
					{
						output.push_back(std::vector<std::string>(lpoint,--rpoint));
						lpoint = rpoint;
					}
				}
			}
			return output;
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

		
		std::vector<std::vector<std::string>> killData(const std::vector<std::string>& datainput,const std::vector<unsigned int> range)
		{
		}
	}
} // oool

