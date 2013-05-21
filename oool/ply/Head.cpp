/*
  Head.cpp - 

  author:ncaq
  mail:nyrigadake38@gmail.com
  time:Tue May  7 14:10:48 2013
*/
#include "Head.hpp"
#include "Format.hpp"
#include "Parse.hpp"
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
				elements_.push_back(i);
			}
		}

		Head::~Head()
		{
		}

		const std::vector<unsigned int> Head::getRange()const
		{
			std::vector<unsigned int> output;
			for(auto& i:elements_)
			{
				output.push_back(i.numCount());
			}
			return output;
		}
	}
} // oool
