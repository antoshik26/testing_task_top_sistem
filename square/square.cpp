#include "square.hpp"

square::square(std::string viev_simvol,std::vector<int> param) : shapes(viev_simvol)
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

square::~square()
{}

void square::viev()
{
	for (int i = 0; i <= _param[0]; i++)
	{
		for (int j = 0; j <= _param[0]; j++)
		{
			if (i > 0 && i < _param[0] && j != 0 && j != _param[0])
				std::cout << " ";
			else
				std::cout << _viev_simvol;
		}
		std::cout << std::endl;
	}
}

void square::set_param(std::vector<int> param)
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