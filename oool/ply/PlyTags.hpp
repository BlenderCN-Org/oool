/*
  PlyTags.hpp - 属性をまとめる.小クラス主義で行こう.

  author:ncaq
  mail:nyrigadake38@gmail.com
  time:Tue May  7 14:32:53 2013
*/
#pragma once
#include <vector>
#include <string>
#include "PlyHead.hpp"
#include "PlyData.hpp"
namespace oool
{
	namespace ply
	{
		class PlyTags
		{
		public:
			PlyTags(const std::vector<std::string>& head,const std::vector<std::string>& data);//Default constructor
			~PlyTags();//Destructor
		private:
			PlyHead head_;
			PlyData data_;
		};
	}
} // oool

