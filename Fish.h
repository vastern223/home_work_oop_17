#pragma once
#include"Animal.h"

class Fish : public Animal
{
protected:

	int maximum_depth_of_immersion;
	float length_of_fins;

public:
	Fish();

	Fish(string species, int speed, float weight, string  habitat, string color, int maximum_depth_of_immersion, float length_of_fins);
	void Move()const;
	void Show()const;
	void Say()const;
	
};

