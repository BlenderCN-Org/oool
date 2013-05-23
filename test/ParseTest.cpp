//ParseTest.cpp - test
//author:,mail:nyrigadake38@gmail.com,time:Thu May 16 04:41:06 2013
#include <iostream>
#include <vector>
#include <string>
#include <boost/test/unit_test.hpp>
#include "../oool/ply/Parse.hpp"
#include "../oool/ply/Read.hpp"
namespace
{
	BOOST_AUTO_TEST_SUITE(oool_ParseTest)

	BOOST_AUTO_TEST_CASE(parseFormat)
	{
		auto v = oool::ply::readFile("./testmodel/cube.ply");
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

	BOOST_AUTO_TEST_CASE(parsePropertyName)
	{
		std::string pro("property float x");
		BOOST_CHECK_EQUAL(oool::ply::parsePropertyName(pro),"x");
	}

	BOOST_AUTO_TEST_CASE(parsePropertyType)
	{
		std::string text("property float x");
		BOOST_CHECK_EQUAL(oool::ply::parsePropertyType(text),"float");
	}

	BOOST_AUTO_TEST_SUITE_END()
}
