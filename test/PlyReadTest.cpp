#define BOOST_TEST_MAIN
#include <iostream>
#include <vector>
#include <string>
#include <boost/test/included/unit_test.hpp>
#include "../oool/ply/PlyRead.hpp"

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
	oool::ply::PlyTags e(oool::ply::divideHeadData(oool::ply::readLine(oool::ply::readfile("./testmodel/cube.ply"))));
}

BOOST_AUTO_TEST_CASE(parseFormat)
{
	auto v = oool::ply::readfile("./testmodel/cube.ply");
	auto l = oool::ply::readLine(v);
	auto ascii = oool::ply::parseFormat(l);
	BOOST_CHECK_EQUAL(static_cast<int>(ascii),static_cast<int>(oool::ply::Format::ASCII));
}

BOOST_AUTO_TEST_CASE(parseNum)
{
	std::vector<std::string> str;
	str.push_back("element vertex 24");
	str.push_back("property hoge huga");
	BOOST_CHECK_EQUAL(oool::ply::parseNum(str),24);

	std::vector<std::string> str2;
	str2.push_back("element vertex 32");
	str2.push_back("property hoge huga");
	BOOST_CHECK_EQUAL(oool::ply::parseNum(str2),32);
}

BOOST_AUTO_TEST_CASE(parseName)
{
	std::string pro("property float x");
	BOOST_CHECK_EQUAL(oool::ply::parseName(pro),"x");
}

BOOST_AUTO_TEST_SUITE_END()
