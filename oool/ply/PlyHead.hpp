/*
  PlyHead.hpp - ヘッダー

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

namespace oool
{
	namespace ply
	{
		enum class Format
		{
			ASCII = 0,
				LITTLE,
				BIG
				};
		class PlyHead
		{
		public:
			PlyHead(const std::vector<std::string>& input);//Default constructor
			~PlyHead();//Destructor
		private:
			void parse(const std::vector<std::string>& input);

			Format format_;
			int vertex_num_;
		};
	}
} // oool

