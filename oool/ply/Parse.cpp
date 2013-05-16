//parse.cpp - 
//author:,mail:nyrigadake38@gmail.com,time:Thu May 16 04:19:22 2013
#include "Parse.hpp"
namespace oool
{
	namespace ply
	{
		const boost::regex ASCII	("^format ascii.*");
		const boost::regex LITTLE	("^format binary_little_endian.*");
		const boost::regex BIG		("^format binary_big_endian.*");
		Format parseFormat(const std::vector<std::string>& input)
		{
			for(auto i:input)
			{
				if(boost::regex_match(i,ASCII))
				{
					return oool::ply::Format::ASCII;
				}
				if(boost::regex_match(i,LITTLE))
				{
					return oool::ply::Format::LITTLE;
				}
				if(boost::regex_match(i,BIG))
				{
					return oool::ply::Format::BIG;
				}
			}
			throw std::runtime_error("oool error unknown format.");
		}

		const boost::regex NUM_POS("^element \\w+ ");
		int parseNum(const std::vector<std::string>& input)
		{
			boost::smatch m;
			for(auto i:input)
			{
				if(boost::regex_search(i,m,NUM_POS))
				{
					int left = m.position() + m.length();
					std::string n = i.substr(left,i.size());
					return boost::lexical_cast<int>(n);
				}
			}
			throw std::runtime_error("oool can't found num");
		}

		const boost::regex NAME("^\\w+ \\w+ ");
		std::string parseName(const std::string& input)
		{
			boost::smatch m;
			boost::regex_search(input,m,NAME);
			int left = m.position() + m.length();
			std::string n = input.substr(left,input.size());
			return n;
		}

		const boost::regex FLOAT("^property float$");
		const boost::regex UCHAR("^property uchar$");
		const boost::regex INT  ("^property int$");
		PropertyDataType stringToDataType(const std::string& input)
		{
			if(boost::regex_match(input,FLOAT))
			{
				return PropertyDataType::FLOAT;
			}
			if(boost::regex_match(input,UCHAR))
			{
				return PropertyDataType::UCHAR;
			}
			if(boost::regex_match(input,INT))
			{
				return PropertyDataType::INT;
			}
			throw std::runtime_error("oool this ply file not support!");
		}
	}
} // oool

