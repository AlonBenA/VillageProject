#pragma once
#include "Family.h"
class Village
{
private:
	Family* families;
public:
	Village();
	Village(Family *families);
	~Village();
	void AddFamily(Family f);
	void DisqualifyFamily(Family f);
	int GetNumOfResidents();
	int GetNumOfAnimals();
	bool validateAllHousesAreIndividual();
	void giftAllFirstGradeChildrenADog();
};

