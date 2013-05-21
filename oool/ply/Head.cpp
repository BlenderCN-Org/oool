/*
  Head.cpp - 

  author:ncaq
  mail:nyrigadake38@gmail.com
  time:Tue May  7 14:10:48 2013
*/
#include "Head.hpp"

namespace oool
{
	namespace ply
	{
		Head::Head(const std::vector<std::string>& input)
		{
			this->format_ = parseFormat(input);
		}

		Head::~Head()
		{
		}
	}
} // oool
