/*
  PlyModel.hpp - 

  author:ncaq
  mail:nyrigadake38@gmail.com
  time:Tue May  7 13:33:17 2013
*/
#pragma once
#include "../Model.hpp"
#include <string>
#include <memory>
#include "PlyTags.hpp"
#include "PlyRead.hpp"
namespace oool
{
	namespace ply
	{
		class PlyModel:public oool::Model
		{
		public:
			PlyModel(const std::string& filename);//Default constructor
			virtual ~PlyModel();//Destructor

			virtual void draw();
		private:
			const std::string filename_;
			PlyTags plytags_;
		};
	}
} // oool

