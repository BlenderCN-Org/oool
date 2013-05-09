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
#include "PlyElement.hpp"
#include "PlyHead.hpp"

namespace oool
{
	namespace ply
	{
		std::string readfile(const std::string& filename);//読み込んで文字列出すだけ
		std::vector<std::string> readLine(const std::string& text);//文字列を受け取って文字列のリストに
		std::vector<std::string> commentAndWhiteDelete(const std::vector<std::string>& input);//文字列のリストからコメントと空行を削除する
		PlyElement divideHeadData(const std::vector<std::string>& ply);//ヘッダとデータを分ける
		oool::ply::Format formatParse(const std::vector<std::string>& input);
		int vertexParse(const std::vector<std::string>& input);
	}
} // oool

