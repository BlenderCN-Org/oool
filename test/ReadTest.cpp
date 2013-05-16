#include <iostream>
#include <vector>
#include <string>
#include <boost/test/unit_test.hpp>
#include "../oool/ply/Read.hpp"
namespace
{
	BOOST_AUTO_TEST_SUITE(oool_ReadTest)

	BOOST_AUTO_TEST_CASE(readFile)
	{
		auto text = oool::ply::readFile("./testmodel/cube.ply");
	}

	BOOST_AUTO_TEST_CASE(readLine)
	{
		//改行で分割されているかのテスト
		const std::string text("foo\nbar");
		auto v = oool::ply::readLine(text);
		BOOST_CHECK_EQUAL(v.at(0),"foo");
		//cout << v.at(0) << endl;
		BOOST_CHECK_EQUAL(v.at(1),"bar");
		//cout << v.at(1) << endl;
	}

	BOOST_AUTO_TEST_SUITE_END()
}
