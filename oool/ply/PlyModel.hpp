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

namespace oool
{
	namespace ply
	{
		class PlyTags;
		class PlyModel:public oool::Model
		{
		public:
			PlyModel(const std::string& filename);//Default constructor
			virtual ~PlyModel();//Destructor
		private:
			const std::string filename_;
			std::unique_ptr<PlyTags> element_;
		};
	}
} // oool

