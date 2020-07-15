#pragma once
#include<string>
#include"simpleFac.hpp"
using namespace std;

enum NUMTYPE {
	INT,
	FLOAT,
	CHAR
};

class NumberFactory {
private:
	static NUMTYPE getType(string num);
public:
	static NSNumber* Init(string num);
};
NUMTYPE NumberFactory::getType(string num) {
	for (size_t i = 0; i < num.size(); ++i) {
		if (num[i] == '.') {
			for (size_t j = i+1; j < num.size(); ++j) {
				if (num[j] > '9' || num[j] < '0') {
					return CHAR;
				}
			}
			return FLOAT;
		}
		else if (num[i] > '9' || num[i] < '0') {
			return CHAR;
		}
	}
	return INT;
}
NSNumber* NumberFactory::Init(string num) {
	switch (getType(num)) {
	case INT:
		return new Int();
	case FLOAT:
		return new Float();
	case CHAR:
		return new Char();
	default:
		return nullptr;
		break;
	}
} 