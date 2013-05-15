/*
  Element.cpp -

  author:ncaq
  mail:nyrigadake38@gmail.com
  time:Thu May  9 13:52:20 2013
*/
#include "Element.hpp"
namespace oool
{
	namespace ply
	{
		Element::Element(const std::vector<std::string>& input)
			:num_(parseNum(input))
		{
		}
		
		Element::~Element()
		{
		}

		int Element::numCount()const
		{
			return this->num_;
		}
		
		int Element::propertyCount()const
		{
			return this->property_.size();
		}
	}
} // oool

