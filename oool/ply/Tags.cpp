/*
  Tags.cpp - 



  author:ncaq
  mail:nyrigadake38@gmail.com
  time:Tue May  7 14:37:30 2013
*/
#include "Tags.hpp"
#include "Kill.hpp"
namespace oool
{
	namespace ply
	{
		Tags::Tags(const std::vector<std::string>& input)
			:head_(divideHeadData(input).first),data_(divideHeadData(input).second,*this)
		{
		}

		Tags::~Tags()
		{
		}

		const std::vector<unsigned int> Tags::getRange()const
		{
			return head_.getRange();
		}
	}
} // oool

