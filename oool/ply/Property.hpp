/*
  Property.hpp - 

  author:ncaq
  mail:nyrigadake38@gmail.com
  time:Thu May  9 14:19:04 2013
*/
#pragma once
#include <vector>
#include <string>
namespace oool
{
	namespace ply
	{
		class Property
		{
		public:
			Property(const std::string& input);
			virtual ~Property();//Destructor
			virtual std::string getPropertyDataType()const;
			virtual std::string getName()const;
		private:
			const std::string type_;
			const std::string name_;
		};
	}
} // oool

