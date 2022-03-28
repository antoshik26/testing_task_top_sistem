#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP
#include "../shapes/shapes.hpp"

class rectangle : public shapes
{
	public:
		rectangle(std::string viev_simvol,std::vector<int> _param);
		~rectangle();
		virtual void viev();
		virtual void set_param(std::vector<int> _param);
};
#endif