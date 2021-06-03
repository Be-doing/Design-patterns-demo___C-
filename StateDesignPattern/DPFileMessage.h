/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/5/6
 **************************************************************/
#pragma once
#include "DPState.h"
class DPFileMessage {
	DPState* _fileState;
public:
	DPFileMessage();
	void showFileState();
	// 点击文件下载、下载完成或者文件移动位置等，会导致文件状态发生改变
	void messageStateChange();
};

class Context {
protected:
	DPNetworkState* _networkState;
public:
	void setNetworkState(DPNetworkState* networkState);
	void printState();
};