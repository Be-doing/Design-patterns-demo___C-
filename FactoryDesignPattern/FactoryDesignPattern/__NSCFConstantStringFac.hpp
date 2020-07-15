#pragma once
#include"__NSCFConstantString.hpp"
#include"StrFactory.hpp"
class __NSCFConstantStringFac :public StrFactory{
public:
	NSString *Init() {
		return new __NSCFConstantString();
	}
};