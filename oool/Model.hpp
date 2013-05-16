/*
  Model.hpp - interface

  author:ncaq
  mail:nyrigadake38@gmail.com
  time:Tue May  7 13:08:30 2013
*/
#pragma once
#include <string>
namespace oool
{
	class Model
	{
	public:
		virtual ~Model()=0;//Destructor

		virtual void draw()=0;
	};
} // oool
