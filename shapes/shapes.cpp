#include "shapes.hpp"

shapes::shapes(std::string viev_simvol)
{
	_viev_simvol = viev_simvol;
}

shapes::~shapes()
{}

std::vector<int> shapes::get_patam()
{
	return (_param);
}

void shapes::set_viev_simvol(std::string viev_simvol)
{
	_viev_simvol = viev_simvol;
}

std::string shapes::get_viev_simvol()
{
	return (_viev_simvol);
}

const char* shapes::IncorrectNumberOfElements::what() const throw()
{
	return ("Incorrect number of elements.");
}