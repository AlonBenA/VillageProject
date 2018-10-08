#pragma once
class House
{
private:
	int numOfRooms;

public:
	House();
	House(int numOfRooms);
	~House();
	int GetNumRooms();
	void SetNumRooms(int numOfRooms);
	bool operator==(const House &other);
};

