#pragma once
#include "Fish.h"
class Great_white_shark  : public Fish
{
private:

public:
	Great_white_shark():Fish() { }

	Great_white_shark(string species, int speed, float weight, string  habitat, string color, int maximum_depth_of_immersion, float length_of_fins): Fish( species, speed, weight,   habitat,  color, maximum_depth_of_immersion,  length_of_fins) { }

	void Show()const
	{
		Fish::Show();
	}

};

