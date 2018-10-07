#include "pch.h"
#include "InDoorAnimal.h"



InDoorAnimal::InDoorAnimal() {}

InDoorAnimal::InDoorAnimal(int numOfLegs, bool isEnergetic, bool isLoyal, string name): Animal(numOfLegs), isEnergetic(isEnergetic), isLoyal(isLoyal), name(name)
{
}


InDoorAnimal::~InDoorAnimal()
{
}


bool InDoorAnimal::getIsEnergetic() {
	return isEnergetic;
}

bool InDoorAnimal::getIsLoyal() {
	return isLoyal;
}

string InDoorAnimal::getName() {
	return name;
}


bool InDoorAnimal::operator==(const InDoorAnimal& other) {
	if (Animal::operator==(other) && (isLoyal == other.isLoyal) &&
		(isEnergetic == other.isEnergetic) && (name == other.name) ) {
		return true;
	}
	return false;
}