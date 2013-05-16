/*
  Tags.hpp - 属性をまとめる.小クラス主義で行こう.

  author:ncaq
  mail:nyrigadake38@gmail.com
  time:Tue May  7 14:32:53 2013
*/
#pragma once
#include <vector>
#include <string>
#include "Head.hpp"
#include "Data.hpp"
namespace oool
{
	namespace ply
	{
		class Tags
		{
		public:
			Tags(const std::vector<std::string>& head,const std::vector<std::string>& data);//Default constructor
			~Tags();//Destructor
		private:
			Head head_;
			Data data_;
		};
	}
} // oool

