//ファクトリメソッド
#pragma once
#include <vector>
#include <string>
#include <memory>
#include "Read.hpp"

//多態性は必要になった時にいろいろやります,モジュール化頑張ってるから後からでもどうにもなるだろ…(フラグ)

namespace oool
{
	namespace ply
	{
		class Element;//friend関数の関係で循環参照になる恐れ
		void makeElementsVector(std::vector<Element>& change_var);//こういう参照を変更するみたいなことは好きじゃないのだが…まあ良いか
	}
}
