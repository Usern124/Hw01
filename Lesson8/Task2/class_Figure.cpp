#include "class_Figure.h"

Figure::Figure() {
	sidesCount = 0;
	name = "Figure";
}

Figure::Figure(int count) {
	sidesCount = count;
}

std::string Figure::get_name() {
	return name;
}

int Figure::get_sidesCount() {
	 return sidesCount;
}

bool Figure::check() {
	if (!sidesCount) return 1;
	else return 0;
};

void Figure::print_info() {
	std::cout << get_name() << ":\n";
	if (check()) std::cout << "Correct\n";
	else std::cout << "Incorrect\n";
	std::cout << "Sides count: " << sidesCount << "\n";
};