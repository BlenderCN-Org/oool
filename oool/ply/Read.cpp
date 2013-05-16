/*
  Read.cpp - 

  author:ncaq
  mail:nyrigadake38@gmail.com
  time:Thu Apr 25 14:38:36 2013
*/
#include "Read.hpp"

namespace oool
{
	namespace ply
	{
		std::string readFile(const std::string& filename)
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
	}
} // oool
