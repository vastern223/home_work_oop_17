#pragma once
#include"Bird.h"
class Sparrow : public Bird
{
private:

public:

	Sparrow() : Bird() {}
	
	Sparrow(string species, int speed, float weight, string  habitat, string color, int flight_altitude, float wingspan) : Bird(species, speed, weight, habitat, color, flight_altitude, wingspan) { }

	void Show()const
	{
		Bird::Show();
	}
};

