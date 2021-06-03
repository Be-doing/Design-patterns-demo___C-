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

class Context;
class DPNetworkState {
public:
	virtual void doAction(Context& context) = 0;
	virtual std::string descriptionString() = 0;
};

class DPNetworkStateWIFI : public DPNetworkState {
public:
	virtual void doAction(Context& context);
	virtual std::string descriptionString();
};

class DPNetworkStateCellular : public DPNetworkState {
public:
	virtual void doAction(Context& context);
	virtual std::string descriptionString();
};

class DPNetworkStateUnknow : public DPNetworkState {
public:
	virtual void doAction(Context& context);
	virtual std::string descriptionString();
};