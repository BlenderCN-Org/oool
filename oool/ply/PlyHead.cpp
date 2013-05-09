/*
  PlyHead.cpp - 

  author:ncaq
  mail:nyrigadake38@gmail.com
  time:Tue May  7 14:10:48 2013
*/
#include "PlyHead.hpp"
#include "PlyRead.hpp"

namespace oool
{
	namespace ply
	{
		PlyHead::PlyHead(const std::vector<std::string>& input)
		{
			parse(input);
		}

		PlyHead::~PlyHead()
		{
		}

		void PlyHead::parse(const std::vector<std::string>& input)
		{
			this->format_ = formatParse(input);
		}
	}
} // oool
