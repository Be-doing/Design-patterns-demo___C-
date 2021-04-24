/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description: 
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/24
 **************************************************************/
#include "DPStack.hpp"
int main() {
	DPStack<int> intStack;
	intStack.push(1);
	intStack.push(2);
	intStack.push(3);
	intStack.push(4);
	intStack.print();


	DPStack<float> floatStack;
	floatStack.print();
	return 0;
}