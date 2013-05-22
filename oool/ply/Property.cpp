/*
  Property.cpp - 

  author:ncaq
  mail:nyrigadake38@gmail.com
  time:Thu May  9 14:19:45 2013
*/
#include "Property.hpp"
#include "Parse.hpp"
namespace oool
{
	namespace ply
	{
		Property::Property(const std::string& input)
			:type_(parsePropertyType(input)),name_(parsePropertyName(input))
		{
		}

		Property::~Property()
		{
		}
		
		std::string Property::getPropertyDataType()const
		{
			return this->type_;
		}

		std::string Property::getName()const
		{
			return this->name_;
		}
	}
} // oool
