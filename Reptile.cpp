#include "Reptile.h"

Reptile::Reptile() : number_of_paws(0), toxicity(0), Animal() { }
Reptile::Reptile(string species, int speed, float weight, string  habitat, string color, int number_of_paws, bool toxicity) : number_of_paws(number_of_paws), toxicity(toxicity), Animal(species, speed, weight, habitat, color) { }


void Reptile:: Move()const
{
	Animal::Move();
	cout << "crawling " << endl;
}

void Reptile:: Show()const
{
	Animal::Show();
	cout << "Number_of_paws: " << number_of_paws << endl;
	cout << "Toxicity: ";
	if (toxicity == true)
	{
		cout << "toxic " << endl;
	}
	else
	{
		cout << "non-toxic " << endl;
	}

}

void Reptile:: Say()const
{
	Animal::Say();
	cout << "pshy pshy" << endl;
}
