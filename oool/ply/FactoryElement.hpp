//ファクトリメソッド
#pragma once
#include <vector>
#include <string>
#include "Read.hpp"

#include "Element.hpp"
#include "Vertex.hpp"

//多態性が必要になった時にいろいろやります

namespace oool
{
	namespace ply
	{
		Element* makeElement(std::vector<std::string>& input);
	}
}
