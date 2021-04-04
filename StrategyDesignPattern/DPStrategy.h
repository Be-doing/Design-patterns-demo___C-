/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time:
 **************************************************************/
#pragma once
#include "DPAbstractStrategy.h"
/*
	Ӧ�ý�����ڵ������ļ��У�����ķ�ʽ��Ϊ����ʾ��ʵ����Ŀ�в��Ƽ�
*/
// template <class T>
class DPAdditionStrategy : public DPAbstractStrategy <double>{
public:
	double useStrategy(double left, double right);
};

class DPSubtractionStrategy : public DPAbstractStrategy <double> {
public:
	double useStrategy(double left, double right);
};

