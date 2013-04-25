/*
  PlyReadLine.cpp - 

  author:ncaq
  mail:nyrigadake38@gmail.com
  time:Thu Apr 25 14:38:36 2013
*/
#include "PlyReadLine.hpp"

namespace oool
{
	std::vector<std::string> readLinePly(std::string filename)
	{
		std::ifstream ifs(filename,ios::in);
		std::vector<std::string> line_buf;
		for(;!ifs.eof();)
		{
			std::string buf;
			ifs.getline(ifs,buf);
			line_buf.push_back(buf);
		}
		return line_buf;
	}
	std::vector<std::string> commentDelete(std::array a)
	{
	}
} // oool

