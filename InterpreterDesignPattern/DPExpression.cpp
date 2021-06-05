/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/6/5
 **************************************************************/
#include "DPExpression.h"

DPValExpression::DPValExpression(string value) {
	_value = value;
}
int DPValExpression::interpret(string value) {
	value = _value;
	int retVal = 0;
	int tmp = 1;
	for (auto ch : value) {
		if (ch < '0' || ch > '9') {
			retVal = INT32_MAX;
			break;
		}
		else {
			retVal *= 10;
			retVal += ch - '0';
		}
	}
	return retVal;
}


DPAddExpression::DPAddExpression(DPExpression* leftExpression, DPExpression* rightExpression)
:_leftExpression(leftExpression)
,_rightExpression(rightExpression) {

}
int DPAddExpression::interpret(string value) {
	return _leftExpression->interpret(value) + _rightExpression->interpret(value);
}

DPSubExpression::DPSubExpression(DPExpression* leftExpression, DPExpression* rightExpression)
:_leftExpression(leftExpression)
, _rightExpression(rightExpression) {

}
int DPSubExpression::interpret(string value) {
	return _leftExpression->interpret(value) - _rightExpression->interpret(value);
}


void DPExpressionProduct::splitString(string inValue, string* outValue, size_t* index) {
	if (inValue.size() < 0) {
		return;
	}
	if (*index > inValue.size()) {
		return;
	}
	for (size_t i = *index; i < inValue.size(); ++i) {
		if (inValue[i] != '+' && inValue[i] != '-') {
			*outValue += inValue[i];
		} else {
			*index = i;
			return;
		}
	}
	*index = inValue.size();
	return;
}

DPExpression* DPExpressionProduct::ctrateExpression(string value) {
	
	DPExpression* left = nullptr;
	DPExpression* right = nullptr;

	size_t index = 0;
	while (index < value.size()) {
		// 只做 +- 不做其他处理
		if (value[index] == '+') {
			DPExpression* leftExpression = expressionStack.top();
			++index;
			string valStr;
			splitString(value, &valStr, &index);
			expressionStack.push(new DPAddExpression(leftExpression, new DPValExpression(valStr)));
		}
		else if (value[index] == '-') {
			DPExpression* leftExpression = expressionStack.top();
			++index;
			string valStr;
			splitString(value, &valStr, &index);
			expressionStack.push(new DPSubExpression(leftExpression, new DPValExpression(valStr)));
		} else {
			string valStr;
			splitString(value, &valStr, &index);
			expressionStack.push(new DPValExpression(valStr));
		}
	}
	return expressionStack.top();
}