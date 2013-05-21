/*
  Data.hpp -

  author:ncaq
  mail:nyrigadake38@gmail.com
  time:Tue May  7 14:29:49 2013
*/
#pragma once
#include <vector>
#include <string>
#include "DataDiv.hpp"
namespace oool
{
	namespace ply
	{
		class Data
		{
		public:
			Data(const std::vector<std::string>& input);//Default constructor
			~Data();//Destructor
		private:
			std::vector<DataDiv> div_;//vertexとかfaceとか
		};
	}
} // oool

