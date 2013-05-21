/*
  Data.cpp - 

  author:ncaq
  mail:nyrigadake38@gmail.com
  time:Tue May  7 14:30:31 2013
*/
#include "Data.hpp"
#include "Tags.hpp"
#include "Kill.hpp"
namespace oool
{
	namespace ply
	{
		Data::Data(const std::vector<std::string>& input,const Tags& tags)
			:tags_contact_(tags)
		{
			auto d = killData(input,tags_contact_.getRange());
			for(auto& i:d)
			{
				div_.push_back(i);
			}
		}

		Data::~Data()
		{
		}
	}
} // oool

