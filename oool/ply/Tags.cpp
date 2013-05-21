/*
  Tags.cpp - 



  author:ncaq
  mail:nyrigadake38@gmail.com
  time:Tue May  7 14:37:30 2013
*/
#include "Tags.hpp"
namespace oool
{
	namespace ply
	{
		Tags::Tags(const std::vector<std::string>& head,const std::vector<std::string>& data)
			:head_(head),data_(data,*this)
		{
		}

		Tags::~Tags()
		{
		}
	}
} // oool

