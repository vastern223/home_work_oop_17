#pragma once
#include"Reptile.h"
class Gecko : public Reptile
{
private:

public:

	Gecko() : Reptile() {}

	Gecko(string species, int speed, float weight, string  habitat, string color, int number_of_paws, bool toxicity): Reptile( species,  speed,  weight,  habitat,  color, number_of_paws,toxicity) { }
	
	void Show()const
	{
		Reptile::Show();
	}
};

