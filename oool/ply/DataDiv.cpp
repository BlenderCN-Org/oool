/*
  DataDiv.cpp - 

  author:
  mail:nyrigadake38@gmail.com
  time:Wed May 15 04:03:23 2013
*/
#include "DataDiv.hpp"
namespace oool
{
	namespace ply
	{
		DataDiv::DataDiv(const std::vector<std::string>& input)
		{
			auto v = killElements(input);
		}

		DataDiv::~DataDiv()
		{
		}
	}
} // oool

