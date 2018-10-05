#pragma once
#include "House.h"

class Villa :public House
{
private:
	bool hasPool;
	int floors;

public:
	Villa();
	Villa(int numOfRooms, bool hasPool, int floors);
	~Villa();

	bool getHasPool();
	int getNumOfFloors();
};

