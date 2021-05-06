/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/5/6
 **************************************************************/
#include "DPState.h"


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