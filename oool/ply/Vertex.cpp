/*
  Vertex.cpp - 

  author:ncaq
  mail:nyrigadake38@gmail.com
  time:Thu May  9 14:05:19 2013
*/
#include "Vertex.hpp"
namespace oool
{
	namespace ply
	{
		Vertex::Vertex(const std::vector<std::string>& input)
		{
			this->num_ = vertexParse(input);
			std::vector<std::string> v = killProperty(input);
		}

		Vertex::~Vertex()
		{
		}

		int Vertex::numCount()const
		{
			return this->num_;
		}

		int Vertex::propertyCount()const
		{
			return 0;
		}
	}
} // oool

