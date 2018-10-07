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
	InDoorAnimal(int numOfLegs, bool isEnergetic, bool isLoyal, string name);
	~InDoorAnimal();
	bool getIsEnergetic();
	bool getIsLoyal();
	string getName();

	bool operator==(const InDoorAnimal& other);
};

