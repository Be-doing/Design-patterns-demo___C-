/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/5/9
 **************************************************************/
#pragma once
class DPFreezer;
class DPVisitor{
public:
	virtual void visitorFreshkeeping(DPFreezer& freezer) = 0;
	virtual void visitorRefrigeration(DPFreezer& freezer) = 0;
};

class DPVisitorMom : public DPVisitor {
public:
	virtual void visitorFreshkeeping(DPFreezer& freezer);
	virtual void visitorRefrigeration(DPFreezer& freezer);
};


class DPVisitorKids : public DPVisitor {
public:
	virtual void visitorFreshkeeping(DPFreezer& freezer);
	virtual void visitorRefrigeration(DPFreezer& freezer);
};