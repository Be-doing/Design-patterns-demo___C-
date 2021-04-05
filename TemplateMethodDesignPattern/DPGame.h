/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/3/31
 **************************************************************/
#pragma once
#include "DPGamesFramework.h"
class DPCjGame : public DPGamesFramework {
public:
	bool loadingGame();
	bool startGame();
	bool playingGame();
	bool endGame();
};

