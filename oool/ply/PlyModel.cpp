/*
  PlyModel.cpp - 

  author:ncaq
  mail:nyrigadake38@gmail.com
  time:Tue May  7 13:39:04 2013
*/
#include "PlyModel.hpp"
namespace oool
{
	namespace ply
	{
		PlyModel::PlyModel(const std::string& filename)
			:filename_(filename),plytags_(divideHeadData(readLine(readFile(filename))))
		{
		}

		PlyModel::~PlyModel()
		{
		}

		void PlyModel::draw()
		{
			//TODO
		}
	}
} // oool

