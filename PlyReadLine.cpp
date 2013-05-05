/*
  PlyReadLine.cpp - 

  author:ncaq
  mail:nyrigadake38@gmail.com
  time:Thu Apr 25 14:38:36 2013
*/
#include "PlyReadLine.hpp"
using namespace std;

namespace oool
{
	vector<string> readLine(const string text)
	{
		vector<string> file_line;
		string::size_type r = 0;
		for(unsigned int l = 0;true;l = ++r)//無限ループのため注意
		{
			r = text.find("\n", l);
			file_line.push_back(text.substr(l,r-l));//行頭から改行までコピー
			if(r == string::npos)//改行が無くなったらbreakする
			{
				break;
			}
		}
		return file_line;
	}
	vector<string> commentAndWhiteDelete(vector<string> a)
	{
		// for(auto i:a)
		// {
			
		// }
		return a;
	}
} // oool

