#pragma once
#include <vector>
#include "Person.h"
#include "Animal.h"
#include "House.h"

using namespace std;

class Family
{
private:
	int numOfFamilyMembers;
	vector<Person*> myFamilyMembers;
	int numOfAnimals;
	vector<Animal*> myAnimals;
	House* myHouse;

public:
	Family();
	~Family();
	Family(int numOfFamilyMembers, vector<Person*> myFamilyMembers,
			int numOfAnimals, vector<Animal*> myAnimals, House* myHouse);
	vector<Person*> GetFamilyMembers();
	vector<Animal*> GetAnimals();
	bool operator==(const Family& other);
	const Family& operator+(Animal& a);
	const Family& operator-(Animal& a);
	House* GetHouse();
};

