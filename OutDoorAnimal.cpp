#include "pch.h"
#include "OutDoorAnimal.h"


OutDoorAnimal::OutDoorAnimal() {}

OutDoorAnimal::OutDoorAnimal(int numOfLegs, bool isDangerous, bool isMeatEater): Animal(numOfLegs), isDangerous(isDangerous), isMeatEater(isMeatEater)
{

}


OutDoorAnimal::~OutDoorAnimal()
{
}


bool OutDoorAnimal::getIsDangerous() {
	return isDangerous;
}

bool OutDoorAnimal::getIsMeatEater() {
	return isMeatEater;
}