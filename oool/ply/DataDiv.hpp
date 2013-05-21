/*
  DataDiv.hpp - vertexとかfaceとかの奴別れてないから分けるため

  author:
  mail:nyrigadake38@gmail.com
  time:Tue May 21 04:27:06 2013
*/
#pragma once
#include <vector>
#include <string>
namespace oool
{
	namespace ply
	{
		class DataDiv
		{
		public:
			DataDiv(const std::vector<std::string>& input);//Default constructor
			~DataDiv();//Destructor
		};
	}
} // oool

