/*
  Read.hpp - コンテナで送り返す

  author:ncaq
  mail:nyrigadake38@gmail.com
  time:Thu Apr 25 14:36:21 2013
*/
#pragma once
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <boost/regex.hpp>
namespace oool
{
	namespace ply
	{
		std::string readFile(const std::string& filename);//読み込んで文字列出すだけ
		std::vector<std::string> readLine(const std::string& text);//文字列を受け取って文字列のリストに
	}
} // oool

