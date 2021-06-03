/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description: 
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/5/6
 **************************************************************/
#include "DPFileMessage.h"
int main() {
//	DPFileMessage message;
//	message.showFileState();

//	message.messageStateChange();
//	message.showFileState();

	Context context;
	DPNetworkState* state = new DPNetworkStateWIFI();
	state->doAction(context);
	context.printState();

	state = new DPNetworkStateCellular();
	state->doAction(context);
	context.printState();

	state = new DPNetworkStateUnknow();
	state->doAction(context);
	context.printState();

	return 0;
}