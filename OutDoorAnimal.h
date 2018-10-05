#pragma once
#include "Animal.h"
class OutDoorAnimal :
	public Animal
{
protected:
	bool isDangerous;
	bool isMeatEater;
public:
	OutDoorAnimal();
	~OutDoorAnimal();
	bool getIsDangerous();
	bool getIsMeatEater();

};

