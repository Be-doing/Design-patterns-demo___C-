#pragma once
#include"NSString.hpp"
class _NSCFString :public NSString {
	void type() {
		std::cout << "_NSCFString" << std::endl;
	}
};