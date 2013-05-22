//GLType.hpp - 基底クラス
//author:,mail:nyrigadake38@gmail.com,time:Tue May 21 05:44:53 2013
#pragma once
#include <vector>
#include <string>
namespace oool
{
	namespace ply
	{
		class GLType
		{
		public:
			GLType();//Default constructor
			virtual ~GLType()=0;//Destructor

			virtual void glAction()=0;//glVertex3d,glNormal3d,そういう動作をする.
		};
	};
} // oool
