/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/3/31
 **************************************************************/
#pragma once
#include <iostream>
#include <string>
class DPGamesFramework {
protected:
	virtual bool loadingGame();
	virtual bool startGame();
	virtual bool playingGame();
	virtual bool endGame();
public:
	virtual void Run() final;
	virtual ~DPGamesFramework();
private:
	void errorLog(std::string funcName);
};