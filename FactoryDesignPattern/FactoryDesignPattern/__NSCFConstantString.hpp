#pragma once
#include"NSString.hpp"
class __NSCFConstantString :public NSString {
	void type() {
		std::cout << "__NSCFConstantString" << std::endl;
	}
};