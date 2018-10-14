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
	OutDoorAnimal(int numOfLegs, bool isDangerous, bool isMeatEater);
	~OutDoorAnimal();
	bool getIsDangerous();
	bool getIsMeatEater();
	virtual void print();

	bool operator==(const OutDoorAnimal& other);
};

