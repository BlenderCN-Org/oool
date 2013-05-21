/*
  Head.hpp - ヘッダー

  author:ncaq
  mail:nyrigadake38@gmail.com
  time:Tue May  7 14:09:08 2013
*/
#pragma once
#include <vector>
#include <string>
#include <algorithm>
#include <boost/regex.hpp>
#include <boost/lexical_cast.hpp>
#include <exception>
#include "Element.hpp"
namespace oool
{
	namespace ply
	{
		class Head
		{
		public:
			Head(const std::vector<std::string>& input);//Default constructor
			~Head();//Destructor
			virtual const std::vector<unsigned int> getRange()const;
		private:
			const Format format_;
			std::vector<Element> elements_;
		};
	}
} // oool

