#pragma once
#include"_NSCFString.hpp"
#include"StrFactory.hpp"
class _NSCFStringFac :public StrFactory {
public:
	NSString *Init() {
		return new _NSCFString();
	}
};