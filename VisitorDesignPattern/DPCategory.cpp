/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/5/9
 **************************************************************/
#include "DPCategory.h"
#include "DPVisitor.h"

void DPCategoryA::accept(DPVisitor& visitor) {
	visitor.visitorCategoryA(*this);
}

void DPCategoryB::accept(DPVisitor& visitor) {
	visitor.visitorCategoryB(*this);
}