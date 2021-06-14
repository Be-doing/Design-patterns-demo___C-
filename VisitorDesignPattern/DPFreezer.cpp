/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/5/9
 **************************************************************/
#include "DPFreezer.h"
#include "DPVisitor.h"



void DPFreshkeeping::accept(DPVisitor& visitor) {
	visitor.visitorFreshkeeping(*this);
}

void DPRefrigeration::accept(DPVisitor& visitor) {
	visitor.visitorRefrigeration(*this);
}
