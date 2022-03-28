#include "triangle.hpp"

triangle::triangle(std::string viev_simvol, std::vector<int> param) : shapes(viev_simvol)
{
	try
	{
		if (param.size() == 5)
			_param = param;
		else
			throw shapes::IncorrectNumberOfElements();
	}
	catch (std::exception &e)
	{
		throw;
	}
}

triangle::~triangle()
{}

void triangle::viev()
{}

void triangle::set_param(std::vector<int> param)
{
	try
	{
		if (param.size() == 5)
			_param = param;
		else
			throw shapes::IncorrectNumberOfElements();
	}
	catch (std::exception &e)
	{
		throw;
	}
}