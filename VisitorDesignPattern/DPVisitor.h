/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/5/9
 **************************************************************/
#pragma once
class DPCategory;
class DPVisitor{
public:
	virtual void visitorCategoryA(DPCategory& category) = 0;
	virtual void visitorCategoryB(DPCategory& category) = 0;
};

class DPVisitorA : public DPVisitor {
public:
	virtual void visitorCategoryA(DPCategory& category);
	virtual void visitorCategoryB(DPCategory& category);
};


class DPVisitorB : public DPVisitor {
public:
	virtual void visitorCategoryA(DPCategory& category);
	virtual void visitorCategoryB(DPCategory& category);
};