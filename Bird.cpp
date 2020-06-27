#include "Bird.h"

Bird::Bird() : flight_altitude(0), wingspan(0), Animal() { }

Bird::Bird(string species, int speed, float weight, string  habitat, string color, int flight_altitude, float wingspan) :flight_altitude(flight_altitude), wingspan(wingspan), Animal(species, speed, weight, habitat, color) { }

void Bird::Move()const
{
	Animal::Move();
	cout << "fly " << endl;
}

void Bird::Show()const
{
	Animal::Show();
	cout << "Flight_altitude: " << flight_altitude <<" m" << endl;
	cout << "Wingspan: " << wingspan <<" cm" << endl;
}

void Bird::Say()const
{
	Animal::Say();
	cout << "Chirp Chirp" << endl;
}