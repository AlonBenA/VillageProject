#pragma once
#include "OutDoorAnimal.h"
class Bear :
	public OutDoorAnimal
{
public:
	Bear();
	~Bear();
	Bear(int numOfLegs, bool isDangerous, bool isMeatEater);
	string MakeNoise();
	virtual void print();

	bool operator==(const Bear & other);
};

