/*
  Element.hpp - vertexとかの基底クラス インターフェイス

  author:ncaq
  mail:nyrigadake38@gmail.com
  time:Thu May  9 13:48:32 2013
*/
#pragma once
#include <vector>
#include <string>
namespace oool
{
	namespace ply
	{
		class Element
		{
		public:
			virtual ~Element()=0;//Destructor

			virtual int numCount()const=0;//"vertex 21" -> "21"
			virtual int propertyCount()const=0;
		};
	}
} // oool
