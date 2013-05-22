//killPlyTest.cpp - test
//author:,mail:nyrigadake38@gmail.com,time:Thu May 16 04:36:46 2013
#include <iostream>
#include <vector>
#include <string>
#include <boost/test/unit_test.hpp>
#include "../oool/ply/Kill.hpp"
#include "../oool/ply/Read.hpp"
namespace
{
	BOOST_AUTO_TEST_SUITE(oool_KillTest)

	BOOST_AUTO_TEST_CASE(deleteCommentAndWhite)
	{
		std::vector<std::string> v;
		v.push_back(" 	");//空白とタブ
		v.push_back("comment");//コメント
		v.push_back("comment blender よくわからん");//コメント
		BOOST_CHECK(!v.empty());
		v = oool::ply::deleteCommentAndWhite(v);
		BOOST_CHECK(v.empty());//当然全て削除されているはず
	}

	BOOST_AUTO_TEST_CASE(divideHeadData)
	{
	       auto e(oool::ply::divideHeadData(oool::ply::readLine(oool::ply::readFile("../testmodel/cube.ply"))));
	}

	BOOST_AUTO_TEST_SUITE_END()
}
