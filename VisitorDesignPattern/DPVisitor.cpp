/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/5/9
 **************************************************************/
#include "DPVisitor.h"
#include <stdio.h>

void DPVisitorMom::visitorFreshkeeping(DPFreezer& freezer) {
	// 添加的操作
	printf("妈妈访问了保鲜层，展示蔬菜\n");
}

void DPVisitorMom::visitorRefrigeration(DPFreezer& freezer) {
	// 添加的操作
	printf("妈妈访问了冷藏层，展示肉食、饺子\n");
}


void DPVisitorKids::visitorFreshkeeping(DPFreezer& freezer) {
	// 添加的操作
	printf("孩子访问了保鲜层，展示牛奶，果汁\n");
}

void DPVisitorKids::visitorRefrigeration(DPFreezer& freezer) {
	// 添加的操作
	printf("孩子访问了冷藏层，展示冰淇淋\n");
}

// 如果要继续添加的操作
// 则创建visitor即可