/*
  PlyReadLine.hpp - コメント消してコンテナで送り返す

  author:ncaq
  mail:nyrigadake38@gmail.com
  time:Thu Apr 25 14:36:21 2013
*/
#pragma once
#include <fstream>
#include <string>
#include <vector>
namespace oool
{
	std::vector<std::string> readLinePly(std::string filename);
	std::vector<std::string> commentDelete(std::vector<std::string> a);
} // oool

