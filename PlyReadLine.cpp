/*
  PlyReadLine.cpp - 

  author:ncaq
  mail:nyrigadake38@gmail.com
  time:Thu Apr 25 14:38:36 2013
*/
#include "PlyReadLine.hpp"
using namespace std;
using namespace boost;

namespace oool
{
	vector<string> readLine(const string& text)
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

	//定数はグローバルでもstaticでも良いというのが自分のルール,ただし名前はちゃんとつけよう
	const regex whiteline("^\\s*$");//空行
	const regex commentline("^comment");//コメント行
	vector<string> commentAndWhiteDelete(const vector<string>& b)
	{
		vector<string> a = b;
		smatch m;//いらん,遅延評価欲しい.
		for(auto i = a.begin();i != a.end();++i)
		{
			if(regex_match(*i,m,whiteline)||regex_search(*i,m,commentline))
			{
				i = a.erase(i);
				--i;
			}
		}
		return a;
	}
} // oool
