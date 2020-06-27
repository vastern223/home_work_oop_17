#pragma once
#include"Animal.h"


class Bird : public Animal
{
protected:
	int flight_altitude;
	float wingspan;

public:
	Bird();
	Bird(string species, int speed, float weight, string  habitat, string color, int flight_altitude, float wingspan);
	void Move()const;
	void Show()const;
	void Say()const;

	
};

