#include "circle.hpp"

circle::circle(std::string viev_simvol, std::vector<int> param) : shapes(viev_simvol)
{
	try
	{
		if (param.size() == 1)
			_param = param;
		else
			throw shapes::IncorrectNumberOfElements();
	}
	catch(std::exception &e)
	{
		throw;
	}
}

circle::~circle()
{}

void circle::viev()
{
	for (int i = 0; i < _param[0] * 2; i++)
	{
		for (int j = 0; j < _param[0] * 2; j++)
		{

		}
	}
}

void circle::set_param(std::vector<int> param)
{
	try
	{
		if (param.size() == 1)
			_param = param;
		else
			throw shapes::IncorrectNumberOfElements();
	}
	catch(std::exception &e)
	{
		throw;
	}	
}