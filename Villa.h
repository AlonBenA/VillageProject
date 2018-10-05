#pragma once
#include "House.h"
class Villa :
	public House
{
private:
	bool hasPool;
	int floors;
public:
	Villa();
	~Villa();
	Villa(int numOfRooms, bool hasPool, int floors);

	bool getHasPool();
	int getNumOfFloors();
};

