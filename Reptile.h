#pragma once
#include"Animal.h"

class Reptile : public Animal
{
protected:
	int number_of_paws;
	bool toxicity;
public:
	Reptile();
	Reptile(string species, int speed, float weight, string  habitat, string color, int number_of_paws, bool toxicity);
	void Move()const;
	void Show()const;
	void Say()const;
	

};
