#pragma once
#include"NSNumber.hpp"
#include<iostream>
class Int :public NSNumber {
public:
	void type() {
		std::cout << "int" << std::endl;
	}
};

class Float :public NSNumber {
public:
	void type() {
		std::cout << "float" << std::endl;
	}
};
class Char :public NSNumber {
public:
	void type() {
		std::cout << "char*" << std::endl;
	}
};