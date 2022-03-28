#include "shapes/shapes.hpp"
#include "circle/circle.hpp"
#include "rectangle/rectangle.hpp"
#include "square/square.hpp"
#include "triangle/triangle.hpp"

int main(int argc, char **argv)
{
	if (argc < 4)
	{
		std::cout << "" << std::endl;
		return (0);
	}
	int key_shapes;
	std::string viev_simvol;
	int param_shapes;
	std::vector<int> param_shapes_vector;
	key_shapes = atoi(argv[1]);
	if (key_shapes == 0 && key_shapes > 4)
	{
		std::cout << "a" << std::endl;
		return (0);
	}
	viev_simvol = (std::string)argv[2];
	for (int i = 3; i < argc; i++)
	{
		param_shapes = atoi(argv[i]);
		if (param_shapes != 0)
			param_shapes_vector.push_back(param_shapes);
		else
		{
			std::cout << argv[i] << std::endl;
			return (0);
		}
	}
	if (param_shapes_vector.size() > 10)
	{
		std::cout << "c" << std::endl;
			return (0);
	}
	try
	{
		switch (key_shapes)
		{
			case 1:
			{
				circle circle_1(viev_simvol, param_shapes_vector);
				circle_1.viev();
				break;
			}
			case 2:
			{
				rectangle rectangle_1(viev_simvol, param_shapes_vector);
				rectangle_1.viev();
				break;
			}
			case 3:
			{
				triangle triangle_1(viev_simvol, param_shapes_vector);
				triangle_1.viev();
				break;
			}
			case 4:
			{
				square square_1(viev_simvol, param_shapes_vector);
				square_1.viev();
			}
		}
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}