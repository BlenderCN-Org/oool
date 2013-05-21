/*
  Data.hpp -

  author:ncaq
  mail:nyrigadake38@gmail.com
  time:Tue May  7 14:29:49 2013
*/
#pragma once
#include <vector>
#include <string>
#include "DataDiv.hpp"
#include "Kill.hpp"
namespace oool
{
	namespace ply
	{
		class Tags;//外包クラスの参照は許されざるクラス構造の反逆である…と考えているのだが
		class Data
		{
		public:
			Data(const std::vector<std::string>& input,const Tags& tags);//Default constructor
			~Data();//Destructor
		private:
			std::vector<DataDiv> div_;//vertexとかfaceとか

			const Tags& tags_contact_;//<厳重注意>問い合わせするだけ!!!
		};
	}
} // oool

