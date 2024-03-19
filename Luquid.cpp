#include "Lucuid.h"

Luquid::Luquid(): name(new std::string("0")), density(new double(0)){}


Luquid::Luquid(std::string name, double density): name(new std::string(name)), density(new double(density))
{
}

Luquid::~Luquid()
{
	delete name;
	delete density;
}

void Luquid::set_density(double value)
{
	*density = value;
}

void Luquid::change_density(double newdensity)
{
	*density += newdensity;
}

double Luquid::get_density()
{
	return *density;
}
