/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description: 
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/6/5
 **************************************************************/
#include "DPExpression.h"
int main() {
	string value = "1000+100+10+1-111";
	DPExpressionProduct product;
	DPExpression* expression = product.ctrateExpression(value);
	int res = expression->interpret(value);
	return 0;
}