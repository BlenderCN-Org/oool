/*
  Head.cpp - 

  author:ncaq
  mail:nyrigadake38@gmail.com
  time:Tue May  7 14:10:48 2013
*/
#include "Head.hpp"
#include "Kill.hpp"
namespace oool
{
	namespace ply
	{
		Head::Head(const std::vector<std::string>& input)
			:format_(parseFormat(input))
		{
			auto arr = killElements(input);
			for(auto& i:arr)
			{
				elements.push_back(i);
			}
		}

		Head::~Head()
		{
		}
	}
} // oool
