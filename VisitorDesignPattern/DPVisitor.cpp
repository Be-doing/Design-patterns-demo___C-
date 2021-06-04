/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/5/9
 **************************************************************/
#include "DPVisitor.h"
#include "DPCategory.h"
#include <stdio.h>

void DPVisitorA::visitorCategoryA(DPCategory& category) {
	// 添加的操作
	printf("DPVisitorA::visitorCategoryA(DPCategory& category)\n");
}

void DPVisitorA::visitorCategoryB(DPCategory& category) {
	// 添加的操作
	printf("DPVisitorA::visitorCategoryB(DPCategory& category)\n");
}


void DPVisitorB::visitorCategoryA(DPCategory& category) {
	// 添加的操作
	printf("DPVisitorB::visitorCategoryA(DPCategory& category)\n");
}

void DPVisitorB::visitorCategoryB(DPCategory& category) {
	// 添加的操作
	printf("DPVisitorB::visitorCategoryB(DPCategory& category)\n");
}

// 如果要继续添加的操作
// 则创建visitor即可