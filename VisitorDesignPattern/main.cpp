/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description: 
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/5/9
 **************************************************************/
#include "DPVisitor.h"
#include "DPFreezer.h"
int main() {

	DPFreezer* freshkeeping = new DPFreshkeeping();
	DPFreezer* refrigeration = new DPRefrigeration();

	DPVisitor* mom = new DPVisitorMom();
	DPVisitor* kid = new DPVisitorKids();


	freshkeeping->accept(*mom);
	freshkeeping->accept(*kid);
	refrigeration->accept(*mom);
	refrigeration->accept(*kid);

	return 0;
}