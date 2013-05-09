/*
  Vertex.hpp - 

  author:ncaq
  mail:nyrigadake38@gmail.com
  time:Thu May  9 13:50:00 2013
*/
#pragma once
#include "Element.hpp"
#include "PlyRead.hpp"
#include "Property.hpp"
namespace oool
{
	namespace ply
	{
		class Vertex:public Element
		{
		public:
			Vertex(const std::vector<std::string>& input);//Default constructor
			virtual ~Vertex();//Destructor
			
			virtual int numCount()const;//"vertex 21" -> "21"
			virtual int propertyCount()const;
		private:
			int num_;
			std::vector<Property> property_;
		};
	}
} // oool

