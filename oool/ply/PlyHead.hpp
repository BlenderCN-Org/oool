/*
  PlyHead.hpp - ヘッダー

  author:ncaq
  mail:nyrigadake38@gmail.com
  time:Tue May  7 14:09:08 2013
*/
#pragma once
#include <vector>
#include <string>
namespace oool
{
	namespace ply
	{
		class PlyHead
		{
		public:
			PlyHead(const std::vector<std::string>& input);//Default constructor
			~PlyHead();//Destructor
		};
	}
} // oool

