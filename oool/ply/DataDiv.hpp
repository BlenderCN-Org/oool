/*
  DataDiv.hpp - データ要素

  author:ncaq
  mail:nyrigadake38@gmail.com
  time:Thu May  9 13:47:44 2013
*/
#pragma once
#include <vector>
#include <memory>
#include "Element.hpp"
namespace oool
{
	namespace ply
	{
		class DataDiv
		{
		public:
			DataDiv(const std::vector<std::string>& input);//Default constructor
			~DataDiv();//Destructor
		private:
			std::vector<std::unique_ptr<Element>> elements;//多態性
		};
	}
} // oool

