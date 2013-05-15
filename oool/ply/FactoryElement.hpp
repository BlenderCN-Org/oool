//ファクトリメソッド
#pragma once
#include <vector>
#include <string>
#include "PlyRead.hpp"

#include "Element.hpp"
#include "Vertex.hpp"

namespace oool
{
	namespace ply
	{
		Element* makeElement(std::vector<std::string>& input);
	}
}
