#ifndef TRANGLE_HPP
#define TRANGLE_HPP
#include "../shapes/shapes.hpp"

class triangle : public shapes
{
	public:
		triangle(std::string viev_simvol, std::vector<int> _param);
		~triangle();
		virtual void viev();
		virtual void set_param(std::vector<int> _param);
};
#endif