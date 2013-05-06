/*
  Object.hpp - Plyの情報をここから詰め込む

  author:
  mail:nyrigadake38@gmail.com
  time:Mon May  6 18:11:49 2013
*/
#pragma once
#include <string>
namespace oool
{
	namespace ply
	{
		class Object
		{
		public:
			Object(const std::string& filename);//Default constructor
			~Object();//Destructor
		private:
			const std::string filename_;
			
			//TODO これから作ります
			//Header head_;
			//Data data_;
		};
	}//ply
} // oool
