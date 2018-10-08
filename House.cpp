#include "pch.h"
#include "House.h"

House::House()
{
}

House::House(int numOfRooms)
{
	this->numOfRooms = numOfRooms;
}

House::~House()
{
}

int House::GetNumRooms() {
	return this->numOfRooms;
}

void House::SetNumRooms(int numOfRooms)
{
	this->numOfRooms = numOfRooms;
}

bool House::operator==(const House &other)
{
	if (this->numOfRooms != other.numOfRooms)
		return false;
	return true;
}
