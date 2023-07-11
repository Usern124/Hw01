#include "class_Triangle.h"


//треугольник
Triangle::Triangle(int a, int b, int c, int A, int B, int C) : Figure(3) {
	name = "Triangle";

	this->a = a;
	this->b = b;
	this->c = c;

	this->A = A;
	this->B = B;
	this->C = C;

	if (!check())
		throw Incorrect_params("The sum of the angles is not equal to 180\n");
}

int Triangle::get_a() {
	return a;
}

int Triangle::get_b() {
	return b;
}

int Triangle::get_c() {
	return c;
}

int Triangle::get_A() {
	return A;
}

int Triangle::get_B() {
	return B;
}

int Triangle::get_C() {
	return C;
}

bool Triangle::check() {
	if (A + B + C == 180) return 1;
	else return 0;
};

void Triangle::print_info() {
	Figure::print_info();
	std::cout
		<< "Sides: a = " << get_a() << " b = " << get_b() << " c = " << get_c()
		<< "\nAngles: A = " << get_A() << " B = " << get_B() << " C = " << get_C() << "\n\n";
}