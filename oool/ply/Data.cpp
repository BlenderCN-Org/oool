/*
  Data.cpp - 

  author:ncaq
  mail:nyrigadake38@gmail.com
  time:Tue May  7 14:30:31 2013
*/
#include "Data.hpp"
#include "Tags.hpp"
namespace oool
{
	namespace ply
	{
		Data::Data(const std::vector<std::string>& input,const Tags& tags)
			:tags_contact_(tags)
		{
			auto d = killData(input,tags_contact_.getRange());
		}

		Data::~Data()
		{
		}
	}
} // oool

