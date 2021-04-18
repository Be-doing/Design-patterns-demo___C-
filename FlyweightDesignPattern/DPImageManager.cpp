/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/18
 **************************************************************/
#include "DPImageManager.h"

DPImageManager::DPImageManager() {
	_imageMap = std::unordered_map<std::string, DPImage>();
}
DPImage DPImageManager::getImage(std::string imageID) {
	std::unordered_map<std::string, DPImage>::iterator item = _imageMap.find(imageID);
	if (item != _imageMap.end()) {
		return _imageMap[imageID];
	}
	_imageMap[imageID] = DPImage(imageID);
}