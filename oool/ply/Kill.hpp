//Kill.hpp - plyの分割
//author:,mail:nyrigadake38@gmail.com,time:Thu May 16 04:13:20 2013
#pragma once
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <boost/regex.hpp>
namespace oool
{
	namespace ply
	{
		std::vector<std::string> deleteCommentAndWhite(const std::vector<std::string>& input);//文字列のリストからコメントと空行を削除する
		std::pair<std::vector<std::string>,std::vector<std::string>> divideHeadData(const std::vector<std::string>& ply);//ヘッダとデータを分ける
		std::vector<std::vector<std::string>> killElements(const std::vector<std::string>& input);//Emacs的な意味のkill
		std::vector<std::string> killProperty(const std::vector<std::string>& input);
		std::vector<std::vector<std::string>> killData(const std::vector<std::string>& datainput,const std::vector<unsigned int>& range);//Dataの区分けをする
	}
} // oool

