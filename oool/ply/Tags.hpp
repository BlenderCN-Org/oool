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
			Tags(const std::vector<std::string>& input);//Default constructor
			~Tags();//Destructor

			virtual const std::vector<unsigned int> getRange()const;
		private:
			const Head head_;
			const Data data_;
		};
	}
} // oool

