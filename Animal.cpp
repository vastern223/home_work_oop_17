#include "Animal.h"

Animal::Animal() : species(nullptr), speed(0), weight(0), habitat(nullptr), color(nullptr) { }

Animal::Animal(string species, int speed, float weight, string  habitat, string color) : species(species), speed(speed), weight(weight), habitat(habitat), color(color) { }

void Animal::Move()const
{
	cout << "I am move ";
}

void Animal::Show()const
{
	cout << "Species: " << species << endl;
	cout << "Speed: " << speed <<" km" << endl;
	cout << "Weight: " << weight << " kg" << endl;
	cout << "Habitat: " << habitat << endl;
	cout << "Color: " << color << endl;
}

void Animal::Say()const
{
	cout << "I am animal, i say ";
}