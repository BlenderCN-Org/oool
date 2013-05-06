/*
  PlyReadLine.cpp - 

  author:ncaq
  mail:nyrigadake38@gmail.com
  time:Thu Apr 25 14:38:36 2013
*/
#include "PlyReadLine.hpp"

namespace oool
{
	std::string readfile(const std::string& filename)
	{
		std::ifstream ifs(filename);
		std::string data;
		ifs >> data;
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
	const boost::regex whiteline("^\\s*$");//空行
	const boost::regex commentline("^comment.*");//コメント行
	std::vector<std::string> commentAndWhiteDelete(const std::vector<std::string>& input)
	{
		std::vector<std::string> a = input;//出来るだけ函数型スタイルにする.効率が多少悪くなろうとも
		for(auto i = a.begin();i != a.end();++i)
		{
			if(boost::regex_match(*i,whiteline)||boost::regex_match(*i,commentline))
			{
				i = a.erase(i);
				--i;
			}
		}
		return a;
	}
} // oool
