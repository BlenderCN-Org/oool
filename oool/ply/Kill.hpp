//Kill.hpp - plyの分割
//author:,mail:nyrigadake38@gmail.com,time:Thu May 16 04:13:20 2013
#pragma once
#include <string>
#include <vector>
#include <algorithm>
#include <boost/regex.hpp>
#include "Tags.hpp"
namespace oool
{
	namespace ply
	{
		std::vector<std::string> deleteCommentAndWhite(const std::vector<std::string>& input);//文字列のリストからコメントと空行を削除する		
		Tags divideHeadData(const std::vector<std::string>& ply);//ヘッダとデータを分ける
		std::vector<std::vector<std::string>> killElements(const std::vector<std::string>& input);//Emacs的な意味のkill
		std::vector<std::string> killProperty(const std::vector<std::string>& input);
	}
} // oool

