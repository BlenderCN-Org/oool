/*
  PlyElement.cpp - 



  author:ncaq
  mail:nyrigadake38@gmail.com
  time:Tue May  7 14:37:30 2013
*/
#include "PlyElement.hpp"
#include "PlyHead.hpp"
#include "PlyData.hpp"
namespace oool
{
	namespace ply
	{
		PlyElement::PlyElement(const std::vector<std::string>& head,const std::vector<std::string>& data)
			:head_(new PlyHead(head)),data_(new PlyData(data))
		{
		}

		PlyElement::~PlyElement()
		{
		}
	}
} // oool

