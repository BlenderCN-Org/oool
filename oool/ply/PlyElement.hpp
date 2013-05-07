/*
  PlyElement.hpp - 属性をまとめる.小クラス主義で行こう.

  author:ncaq
  mail:nyrigadake38@gmail.com
  time:Tue May  7 14:32:53 2013
*/
#pragma once
#include <vector>
#include <string>
#include <memory>
namespace oool
{
	namespace ply
	{
		class PlyHead;
		class PlyData;
		class PlyElement
		{
		public:
			PlyElement(const std::vector<std::string>& head,const std::vector<std::string>& data);//Default constructor
			~PlyElement();//Destructor
		private:
			std::unique_ptr<PlyHead> head_;
			std::unique_ptr<PlyData> data_;
		};
	}
} // oool

