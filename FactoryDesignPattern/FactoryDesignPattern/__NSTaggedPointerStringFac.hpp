#pragma once
#include"__NSTaggedPointerString.hpp"
#include"StrFactory.hpp"
class __NSTaggedPointerStringFac :public StrFactory {
public:
	NSString *Init() {
		return new __NSTaggedPointerString();
	}
};