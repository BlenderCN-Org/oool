#define BOOST_TEST_MAIN
#include <iostream>
#include <vector>
#include <string>
#include <boost/test/included/unit_test.hpp>
#include "oool/PlyReadLine.hpp"
using namespace std;

BOOST_AUTO_TEST_SUITE(oool_test)

BOOST_AUTO_TEST_CASE(readline)
{
	//改行で分割されているかのテスト
	const string text("foo\nbar");
	auto v = oool::readLine(text);
	BOOST_CHECK_EQUAL(v.at(0),"foo");
	//cout << v.at(0) << endl;
	BOOST_CHECK_EQUAL(v.at(1),"bar");
	//cout << v.at(1) << endl;
}

BOOST_AUTO_TEST_CASE(commentAndWhiteDelete)
{
	vector<string> v;
	v.push_back(" 	");//空白とタブ
	v.push_back("comment");//コメント
	v.push_back("comment blender よくわからん");//コメント

	BOOST_CHECK(!v.empty());

	v = oool::commentAndWhiteDelete(v);

	BOOST_CHECK(v.empty());//当然全て削除されているはず
}

BOOST_AUTO_TEST_SUITE_END()

