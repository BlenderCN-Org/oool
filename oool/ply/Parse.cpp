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

		std::string toEnd(const std::string& from,const boost::regex& r)
		{
			boost::smatch m;
			boost::regex_search(from,m,r);
			int left = m.position() + m.length();
			std::string n = from.substr(left,from.size());
			return n;
		}
		
		std::string parseElementName(const std::string& input)
		{
			return toEnd(input,boost::regex("^\\w+ "));
		}
		
		std::string parsePropertyName(const std::string& input)
		{
			return toEnd(input,boost::regex("^\\w+ \\w+ "));
		}

		const boost::regex TYPE_POS("(?<=\\s)\\w+(?=\\s)");
		std::string parsePropertyType(const std::string& input)
		{
			boost::smatch m;
			boost::regex_search(input,m,TYPE_POS);
			return m.str();
		}

		std::vector<double> parseGLNumber(const std::string& input)
		{
			std::vector<std::string> buf;
			boost::algorithm::split(buf,input,boost::is_any_of(" "));
			std::vector<double> output;
			for(auto& i:buf)
			{
				output.push_back(boost::lexical_cast<double>(i));
			}
			return output;
		}

	}
} // oool

