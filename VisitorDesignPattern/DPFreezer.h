/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/5/9
 **************************************************************/
#pragma once
class DPVisitor;
class DPFreezer {
public:
	virtual void accept(DPVisitor& visitor) = 0;
};
/*
	访问者模式的前提就是类的结构是确定的，即就是类中对象是确定的，比如也就是说冰箱的层级是确定的
*/
class DPFreshkeeping : public DPFreezer {
public:
	virtual void accept(DPVisitor& visitor);
};

class DPRefrigeration : public DPFreezer {
public:
	virtual void accept(DPVisitor& visitor);
};
