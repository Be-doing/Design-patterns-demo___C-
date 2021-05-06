/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/5/6
 **************************************************************/
#pragma once
#include <string>
class DPState {
protected:
	DPState* _nextState;
public:
	virtual std::string stateTitle() = 0;
	virtual DPState* getNextState() = 0;
};

class DPInitialState : public DPState {
public:
	virtual std::string stateTitle();
	virtual DPState* getNextState();
};

class DPDownloadState : public DPState {
public:
	virtual std::string stateTitle();
	virtual DPState* getNextState();
};

class DPCompleteState : public DPState {
public:
	virtual std::string stateTitle();
	virtual DPState* getNextState();
};