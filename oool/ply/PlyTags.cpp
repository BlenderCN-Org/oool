/*
  PlyTags.cpp - 



  author:ncaq
  mail:nyrigadake38@gmail.com
  time:Tue May  7 14:37:30 2013
*/
#include "PlyTags.hpp"
namespace oool
{
	namespace ply
	{
		PlyTags::PlyTags(const std::vector<std::string>& head,const std::vector<std::string>& data)
			:head_(head),data_(data)
		{
		}

		PlyTags::~PlyTags()
		{
		}
	}
} // oool

