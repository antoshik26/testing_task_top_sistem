#ifndef SQUARE_HPP
#define SQUARE_HPP
#include "../shapes/shapes.hpp"

class square : public shapes
{
	public:
		square(std::string viev_simvol, std::vector<int> _param);
		~square();
		virtual void viev();
		virtual void set_param(std::vector<int> _param);
};
#endif