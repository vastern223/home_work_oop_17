#pragma once
#include<iostream>
#include<string>
using namespace std;
class Animal
{
protected:
	string species;
	int speed;
	float weight;
	string  habitat;
	string color;

public:
	Animal();
	Animal(string species, int speed, float weight, string  habitat, string color);
	void Move()const;
	void Show()const;
	void Say()const;

};

