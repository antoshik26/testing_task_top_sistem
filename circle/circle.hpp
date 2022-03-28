#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#include "../shapes/shapes.hpp"

class circle : public shapes
{
	public:
		circle(std::string viev_simvol, std::vector<int> _param);
		~circle();
		virtual void viev();
		virtual void set_param(std::vector<int> _param);
};
#endif