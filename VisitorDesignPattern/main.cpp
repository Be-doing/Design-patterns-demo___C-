/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description: 
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/5/9
 **************************************************************/
#include "DPVisitor.h"
#include "DPCategory.h"
int main() {

	DPCategory* categoryA = new DPCategoryA();
	DPCategory* categoryB = new DPCategoryB();

	DPVisitor* visitorA = new DPVisitorA();
	DPVisitor* visitorB = new DPVisitorB();


	categoryA->accept(*visitorA);
	categoryA->accept(*visitorB);
	categoryB->accept(*visitorA);
	categoryB->accept(*visitorB);

	return 0;
}