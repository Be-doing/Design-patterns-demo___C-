/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/3/31
 **************************************************************/
#include "DPGamesFramework.h"

void DPGamesFramework::Run() {
	if (!loadingGame()) {
		errorLog("loadingGame");
		return;
	}
	if (!startGame()) {
		errorLog("startGame");
		return;
	}
	if (!playingGame()) {
		errorLog("playingGame");
		return;
	}
	if (!endGame()) {
		errorLog("endGame");
		return;
	}
}
void DPGamesFramework::errorLog(std::string funcName) {
	std::cout << "未实现" + funcName + "或者返回值错误" << std::endl;
}
bool DPGamesFramework::loadingGame() {
	return false;
}
bool DPGamesFramework::startGame() {
	return false;
}
bool DPGamesFramework::playingGame() {
	return false;
}
bool DPGamesFramework::endGame() {
	return false;
}

DPGamesFramework::~DPGamesFramework() {

}