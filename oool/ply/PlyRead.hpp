/*
  PlyRead.hpp - コメント消してコンテナで送り返す

  author:ncaq
  mail:nyrigadake38@gmail.com
  time:Thu Apr 25 14:36:21 2013
*/
#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <boost/regex.hpp>
#include <boost/lexical_cast.hpp>
#include "Format.hpp"
#include "PlyTags.hpp"
#include "Property.hpp"
#include "PropertyDataType.hpp"

namespace oool
{
	namespace ply
	{
		std::string readfile(const std::string& filename);//読み込んで文字列出すだけ
		std::vector<std::string> readLine(const std::string& text);//文字列を受け取って文字列のリストに
		std::vector<std::string> deleteCommentAndWhite(const std::vector<std::string>& input);//文字列のリストからコメントと空行を削除する
		
		PlyTags divideHeadData(const std::vector<std::string>& ply);//ヘッダとデータを分ける
		std::vector<std::vector<std::string>> killElements(const std::vector<std::string>& input);//Emacs的な意味のkill
		std::vector<std::string> killProperty(const std::vector<std::string>& input);
		PropertyDataType stringToDataType(const std::string& input);//列挙体返す

		Format parseFormat(const std::vector<std::string>& input);//文字コードとリトルビッグエンディアン判断.といっても大体ASCIIだと思うけどなあ…
		int parseNum(const std::vector<std::string>& input);//"vertex 24"::string -> 24::int
		std::string parseName(const std::string& input);//"property float x"::std::string -> "x"::std::string
	}
} // oool

