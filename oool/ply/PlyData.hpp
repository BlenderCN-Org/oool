/*
  PlyData.hpp -

  author:ncaq
  mail:nyrigadake38@gmail.com
  time:Tue May  7 14:29:49 2013
*/
#pragma once
#include <vector>
#include <string>
namespace oool
{
	namespace ply
	{
		class PlyData
		{
		public:
			PlyData(const std::vector<std::string>& input);//Default constructor
			~PlyData();//Destructor
		};
	}
} // oool

