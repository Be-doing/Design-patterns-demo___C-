/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description: 
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 
 **************************************************************/
#include <iostream>
#include "DPStrategy.h"
double calculate(double left, double right, char symbol, char* error) {
	// 演示不做安全判断 
	if (symbol == '+') {
		return left + right;
	} else if (symbol == '-') {
		return left - right;
	} else if (symbol == '*') {
		return left * right;
	} else if (symbol == '/') {
		if (right == 0) {
			*error = 1;
			return -1;
		}
		return left / right;
	}
	*error = 1;
	return -1;
}

int main() {
	DPAbstractStrategy<double>* add = new DPAdditionStrategy();
	std::cout <<  add->useStrategy(12, 12) << std::endl;
	DPAbstractStrategy<double>* sub = new DPSubtractionStrategy();
	std::cout << sub->useStrategy(24, 12) << std::endl;
	return 0;
}