#pragma once
#include"NSString.hpp"
class __NSTaggedPointerString :public NSString {
	void type() {
		std::cout << "__NSTaggedPointerString" << std::endl;
	}
};