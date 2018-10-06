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
};

