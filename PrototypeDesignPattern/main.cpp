/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description: 
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/13
 **************************************************************/
#include "DPClonedAnimal.h"
int main() {
	DPAbstractClonedAnimal* sheepOne = new DPClonedSheep("喜羊羊");
	sheepOne->AnimalCry();
	DPAbstractClonedAnimal* sheepTwo = sheepOne->clone();
	sheepTwo->AnimalCry();

	DPAbstractClonedAnimal* cattleOne = new DPClonedCattle("大角牛");
	cattleOne->AnimalCry();
	DPAbstractClonedAnimal* cattleTwo = cattleOne->clone();
	cattleTwo->AnimalCry();
	return 0;
}