/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/5/6
 **************************************************************/
#include "DPState.h"
#include "DPFileMessage.h"

std::string DPInitialState::stateTitle() {
	return std::string("下载");
}
DPState* DPInitialState::getNextState() {
	if (_nextState == nullptr) {
		_nextState = new DPDownloadState();
	}
	return _nextState;
}

std::string DPDownloadState::stateTitle() {
	return std::string("下载中");
}
DPState* DPDownloadState::getNextState() {
	if (_nextState == nullptr) {
		_nextState = new DPCompleteState();
	}
	return _nextState;
}

std::string DPCompleteState::stateTitle() {
	return std::string("打开");
}
DPState* DPCompleteState::getNextState() {
	if (_nextState == nullptr) {
		// 被删除后或者文件移动位置后，需要重新下载
		_nextState = new DPInitialState();
	}
	return _nextState;
}


std::string DPNetworkStateWIFI::descriptionString() {
	return std::string("wifi");
}
void DPNetworkStateWIFI::doAction(Context& context) {
	context.setNetworkState(this);
}


std::string DPNetworkStateCellular::descriptionString() {
	return std::string("蜂窝数据");
}
void DPNetworkStateCellular::doAction(Context& context) {
	context.setNetworkState(this);
}

std::string DPNetworkStateUnknow::descriptionString() {
	return std::string("unknow");
}
void DPNetworkStateUnknow::doAction(Context& context) {
	context.setNetworkState(this);
}