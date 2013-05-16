/*
  Model.hpp - 

  author:ncaq
  mail:nyrigadake38@gmail.com
  time:Tue May  7 13:33:17 2013
*/
#pragma once
#include "../Model.hpp"
#include <string>
#include <memory>
#include "Tags.hpp"
#include "Read.hpp"
#include "Kill.hpp"
namespace oool
{
	namespace ply
	{
		class Model:public oool::Model
		{
		public:
			Model(const std::string& filename);//Default constructor
			virtual ~Model();//Destructor

			virtual void draw();
		private:
			const std::string filename_;
			Tags plytags_;
		};
	}
} // oool

