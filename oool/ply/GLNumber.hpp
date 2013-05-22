//glNumber.hpp - 数字の属性とかまとめないと無理.処理できない.
//author:,mail:nyrigadake38@gmail.com,time:Wed May 22 14:12:14 2013
#pragma once
#include <string>
namespace oool
{
	namespace ply
	{
		class GLNumber
		{
		public:
			GLNumber();//Default constructor
		private:
			const double num_;
			const std::string type_;//型
			const std::string name_;//名前
		};
	}
} // oool

