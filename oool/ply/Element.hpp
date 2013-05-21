/*
  Element.hpp - vertexとかの基底クラス
  基底クラスであってインターフェイスではない(重要)

  author:ncaq
  mail:nyrigadake38@gmail.com
  time:Thu May  9 13:48:32 2013
*/
#pragma once
#include <vector>
#include <string>
#include "Parse.hpp"
#include "Property.hpp"
namespace oool
{
	namespace ply
	{
		class Element
		{
		public:
			Element(const std::vector<std::string>& input);
			virtual ~Element();//Destructor

			virtual int numCount()const;//"vertex 21" -> "21"
			virtual int propertyCount()const;//propertyの数
		private:
			const int num_;
			std::vector<Property> property_;
		};
	}
} // oool
