/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/24
 **************************************************************/
#pragma once
/*
	模板只有被调用的时候才会被实例化。
	所以如果直接进行编译，模板会出现链接错误。
	为了解决这个错误我们需要把模板的声明和定义防止一个.h或者.cpp文件里。
*/
#include <deque>
#include <iostream>
template <class T>
class DPStack {
	std::deque<T> _containser;
public:
	void push(const T& value) {
		_containser.push_back(value);
	}
	void pop() {
		if (!_containser.empty()) {
			_containser.pop_back();
		}
	}
	T& top() {
		return _containser.back();
	}
	bool empty() {
		return _containser.empty();
	}
	void print() {
		if (_containser.empty()) {
			std::cout << "Error, DPStack obj is empty!\n";
			return;
		}
		DPStack tmpStack(*this);
		do {
			std::cout << tmpStack.top() << " ";
			tmpStack.pop();
		} while (!tmpStack.empty());
		std::cout << "\n======print over=====\n";
	}
};

