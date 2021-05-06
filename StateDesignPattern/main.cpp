/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description: 
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/5/6
 **************************************************************/
#include "DPFileMessage.h"
int main() {
	DPFileMessage message;
	message.showFileState();

	message.messageStateChange();
	message.showFileState();
	return 0;
}