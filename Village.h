#pragma once
#include <vector>
#include "Family.h"

class Village
{
private:
	vector<Family> families;

public:
	Village();
	Village(vector<Family> families);
	~Village();

	void AddFamily(Family& f);
	void DisqualifyFamily(Family& f);
	int GetNumOfResidents();
	int GetNumOfAnimals();
	bool validateAllHousesAreIndividual();
	void giftAllFirstGradeChildrenADog();
};

