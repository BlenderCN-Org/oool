/*
  Property.cpp - 

  author:ncaq
  mail:nyrigadake38@gmail.com
  time:Thu May  9 14:19:45 2013
*/
#include "Property.hpp"
namespace oool
{
	namespace ply
	{
		Property::Property(const std::string& input)
			:type_(stringToDataType(input)),name_(parsePropertyName(input))
		{
		}

		Property::~Property()
		{
		}
		
		PropertyDataType Property::getPropertyDataType()const
		{
			return this->type_;
		}

		std::string Property::getName()const
		{
			return this->name_;
		}
	}
} // oool
