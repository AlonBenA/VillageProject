#include "pch.h"
#include "Villa.h"


Villa::Villa():House()
{
}

Villa::Villa(int numOfRooms, bool hasPool, int floors):House (numOfRooms)
{
	this->hasPool = hasPool;
	this->floors = floors;
}

Villa::~Villa()
{
}

bool Villa::getHasPool() {
	return this->hasPool;
}

int Villa::getNumOfFloors() {
	return this->hasPool;
}

bool Villa::operator==(const Villa &other)
{
	if (House::operator==(other) == false)
		return false;
	if (other.hasPool != this->hasPool)
		return false;
	if (other.floors != this->floors)
		return false;
	return true;
}