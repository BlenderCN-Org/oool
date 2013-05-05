#define BOOST_TEST_MAIN
#include <iostream>
#include <boost/test/included/unit_test.hpp>
#include "PlyReadLine.hpp"
using namespace std;

BOOST_AUTO_TEST_SUITE(oool)

BOOST_AUTO_TEST_CASE(readline)
{
	const string text("foo\nbar");
	auto list = oool::readLine(text);
	BOOST_CHECK_EQUAL(list.at(0),"foo");
	cout << list.at(0) << endl;
	BOOST_CHECK_EQUAL(list.at(1),"bar");
	cout << list.at(1) << endl;
}

BOOST_AUTO_TEST_SUITE_END()
