/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/6/5
 **************************************************************/
#pragma once
#include <string>
#include <stack>
using std::string;
using std::stack;
class DPExpression {
public:
	virtual int interpret(string value) = 0;
};

class DPValExpression : public DPExpression {
	string _value;
public:
	DPValExpression(string value);
public:
	int interpret(string value);
};

class DPAddExpression : public DPExpression {
	DPExpression* _leftExpression;
	DPExpression* _rightExpression;
public:
	DPAddExpression(DPExpression* leftExpression, DPExpression* rightExpression);
	virtual int interpret(string value);
};

class DPSubExpression : public DPExpression {
	DPExpression* _leftExpression;
	DPExpression* _rightExpression;
public:
	DPSubExpression(DPExpression* leftExpression, DPExpression* rightExpression);
	virtual int interpret(string value);
};


class DPExpressionProduct {
	stack<DPExpression*> expressionStack;
	void splitString(string inValue, string* outValue, size_t* index);
public:
	DPExpression* ctrateExpression(string value);
};