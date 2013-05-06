/*
  PlyReadLine.hpp - コメント消してコンテナで送り返す

  author:ncaq
  mail:nyrigadake38@gmail.com
  time:Thu Apr 25 14:36:21 2013
*/
#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <boost/regex.hpp>

namespace oool
{
	std::string readfile(const std::string& filename);
	std::vector<std::string> readLine(const std::string& text);//文字列を受け取って文字列のリストに
	std::vector<std::string> commentAndWhiteDelete(const std::vector<std::string>& input);//文字列のリストからコメントと空行を削除する
} // oool

