/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *	当需要给基类添加操作时，不可避免的要修改子类
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/5/9
 **************************************************************/
#pragma once
class DPVisitor;
class DPCategory {
public:
	virtual void accept(DPVisitor& visitor) = 0;
};

class DPCategoryA : public DPCategory {
public:
	virtual void accept(DPVisitor& visitor);
};

class DPCategoryB : public DPCategory {
public:
	virtual void accept(DPVisitor& visitor);
};
