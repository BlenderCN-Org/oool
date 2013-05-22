//Vertex.hpp - 
//author:,mail:nyrigadake38@gmail.com,time:Tue May 21 05:46:41 2013
#pragma once
#include "GLType.hpp"
#include "GLNumber.hpp"
namespace oool
{
	namespace ply
	{
		class Vertex:public GLType
		{
		public:
			Vertex(const std::vector<std::string>& input);//Default constructor
			virtual ~Vertex();//Destructor

			virtual void glAction()override;
		private:
			const std::vector<GLNumber> glvertex_;
		};
	}
} // oool

