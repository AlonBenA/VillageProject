#pragma once
#include "InDoorAnimal.h"
class Dog :
	public InDoorAnimal
{
public:
	Dog();
	~Dog();
	Dog(int numOfLegs, bool isEnergetic, bool isLoyal);
	//string MakeNoise();
};

