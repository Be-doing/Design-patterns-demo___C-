/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description: 
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/5/9
 **************************************************************/
#include "DPInvoker.h"
int main() {

	DPCommand* lsCmd = new DPLsCommad();
	
	DPInvoker invoker;
	invoker.execute(lsCmd);
	invoker.showHistoryCommand();


	return 0;
}