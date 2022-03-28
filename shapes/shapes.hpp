#ifndef SHAPPES_HPP
#define SHAPPES_HPP
#include <iostream>
#include <string>
#include <vector>

class shapes
{
	protected:
		std::vector<int> _param;
		std::string _viev_simvol;
		class IncorrectNumberOfElements : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
	public:
		shapes(std::string viev_simvol);
		virtual ~shapes();
		std::vector<int> get_patam();
		void set_viev_simvol(std::string _viev_simvol);
		std::string get_viev_simvol();
		virtual void viev() = 0;
		virtual void set_param(std::vector<int> _param) = 0;
};

#endif