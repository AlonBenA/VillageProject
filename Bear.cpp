#include "pch.h"
#include "Bear.h"



Bear::Bear()
{
}


Bear::~Bear()
{
}

Bear::Bear(int numOfLegs, bool isDangerous, bool isMeatEater): OutDoorAnimal(numOfLegs, isDangerous, isMeatEater) {}

string Bear::MakeNoise() {
	return "bear shonds";
}


bool Bear::operator==(const Bear & other) {
	if (OutDoorAnimal::operator==(other)) {
		return true;
	}
	return false;
}