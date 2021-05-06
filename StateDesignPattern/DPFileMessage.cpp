/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/5/6
 **************************************************************/
#include "DPFileMessage.h"
#include <iostream>

DPFileMessage::DPFileMessage() {
	_fileState = new DPInitialState();
}

void DPFileMessage::showFileState() {
	std::cout << _fileState->stateTitle() << std::endl;
}

void DPFileMessage::messageStateChange() {
	_fileState = _fileState->getNextState();
}