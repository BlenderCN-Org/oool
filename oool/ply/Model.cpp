/*
  Model.cpp - 

  author:ncaq
  mail:nyrigadake38@gmail.com
  time:Tue May  7 13:39:04 2013
*/
#include "Model.hpp"
#include "Read.hpp"
#include "Kill.hpp"
namespace oool
{
	namespace ply
	{
		Model::Model(const std::string& filename)
			:filename_(filename),plytags_(divideHeadData(readLine(readFile(filename))))
		{
		}

		Model::~Model()
		{
		}

		void Model::draw()
		{
			//TODO
		}
	}
} // oool

