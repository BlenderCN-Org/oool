/*
  Property.hpp - 

  author:ncaq
  mail:nyrigadake38@gmail.com
  time:Thu May  9 14:19:04 2013
*/
#pragma once
#include <vector>
#include <string>
#include "PropertyDataType.hpp"
#include "PlyRead.hpp"
namespace oool
{
	namespace ply
	{
		class Property
		{
		public:
			Property(const std::string& input);
			virtual ~Property();//Destructor
			virtual PropertyDataType getPropertyDataType()const;
			virtual std::string getName()const;
		private:
			const PropertyDataType type_;
			const std::string name_;
		};
	}
} // oool

