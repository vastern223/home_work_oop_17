#include "Fish.h"

Fish::Fish() : maximum_depth_of_immersion(0), length_of_fins(0) { }

Fish::Fish(string species, int speed, float weight, string  habitat, string color, int maximum_depth_of_immersion, float length_of_fins) : maximum_depth_of_immersion(maximum_depth_of_immersion), length_of_fins(length_of_fins), Animal(species, speed, weight, habitat, color) { }

void Fish:: Move()const
{
	Animal::Move();
	cout << "swim " << endl;
}

void Fish:: Show()const
{
	Animal::Show();
	cout << "Maximum depth of immersion: " << maximum_depth_of_immersion <<" m" << endl;
	cout << "Length of fins: " << length_of_fins << " cm" << endl;


}

void Fish:: Say()const
{
	Animal::Say();
	cout << "bul bul" << endl;
}
