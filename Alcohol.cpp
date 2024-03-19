#include "Alcohol.h"

Alcohol::Alcohol() : Luquid(), strength(new double(0))
{
}

Alcohol::Alcohol(std::string name, double density, double strength): Luquid(name,density), strength(new double(strength))
{
}

Alcohol::~Alcohol()
{
	delete strength;
}

void Alcohol::set_strength(double value)
{
	*strength = value;
}

void Alcohol::change_strength(double newstrength)
{
	*strength += newstrength;
}

double Alcohol::get_strength()
{
	return *strength;
}
