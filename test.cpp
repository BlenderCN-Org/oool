#define BOOST_TEST_MAIN
#include <iostream>
#include <vector>
#include <string>
#include <boost/test/included/unit_test.hpp>
#include "oool/ply/PlyRead.hpp"

BOOST_AUTO_TEST_SUITE(oool_PlyRead_test)

BOOST_AUTO_TEST_CASE(readfile)
{
	auto text = oool::ply::readfile("./testmodel/cube.ply");
}

BOOST_AUTO_TEST_CASE(readline)
{
	//改行で分割されているかのテスト
	const std::string text("foo\nbar");
	auto v = oool::ply::readLine(text);
	BOOST_CHECK_EQUAL(v.at(0),"foo");
	//cout << v.at(0) << endl;
	BOOST_CHECK_EQUAL(v.at(1),"bar");
	//cout << v.at(1) << endl;
}

BOOST_AUTO_TEST_CASE(commentAndWhiteDelete)
{
	std::vector<std::string> v;
	v.push_back(" 	");//空白とタブ
	v.push_back("comment");//コメント
	v.push_back("comment blender よくわからん");//コメント

	BOOST_CHECK(!v.empty());

	v = oool::ply::commentAndWhiteDelete(v);

	BOOST_CHECK(v.empty());//当然全て削除されているはず
}

BOOST_AUTO_TEST_CASE(divideHeadData)
{
	oool::ply::PlyTags e(oool::ply::divideHeadData(oool::ply::readLine(oool::ply::readfile("./testmodel/cube.ply"))));
}

BOOST_AUTO_TEST_CASE(formatParse)
{
	auto v = oool::ply::readfile("./testmodel/cube.ply");
	auto l = oool::ply::readLine(v);
	auto ascii = oool::ply::formatParse(l);
	BOOST_CHECK_EQUAL(static_cast<int>(ascii),static_cast<int>(oool::ply::Format::ASCII));
}

BOOST_AUTO_TEST_SUITE_END()

