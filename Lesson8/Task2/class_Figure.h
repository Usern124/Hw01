#pragma once
#include <iostream>
#include "Incorrect_params.h"

class Figure {
public:
	Figure();
	Figure(int count);

	std::string get_name();
	int get_sidesCount();

	virtual bool check();
	virtual void print_info();

protected:
	std::string name;
	int sidesCount;
};