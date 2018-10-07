#include "pch.h"
#include "Dog.h"


Dog::Dog()
{
}


Dog::~Dog()
{
}

Dog::Dog(int numOfLegs, bool isEnergetic, bool isLoyal, string name): InDoorAnimal(numOfLegs, isEnergetic, isLoyal, name)
{
}

string Dog::MakeNoise() {
	return "Woof!!";
}



bool Dog::operator==(const Dog & other) {
	if (InDoorAnimal::operator==(other)) {
		return true;
	}
	return false;
}