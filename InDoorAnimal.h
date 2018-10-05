#pragma once
#include "Animal.h"
class InDoorAnimal :
	public Animal
{
protected:
	bool isEnergetic;
	bool isLoyal;
	string name;
public:
	InDoorAnimal();
	~InDoorAnimal();
	bool getIsEnergetic();
	bool getIsLoyal();
	string getName();

};

