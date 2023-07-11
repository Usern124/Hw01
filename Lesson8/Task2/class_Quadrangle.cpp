#include "class_Quadrangle.h"
//четырехугольник
Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) :Figure(4) {
	name = "Quadrangle";
	this->a = a;
	this->b = b;
	this->c = c;
	this->d = d;

	this->A = A;
	this->B = B;
	this->C = C;
	this->D = D;

	if (!check())
		throw Incorrect_params("The sum of the angles is not equal to 360");
}

int Quadrangle::get_a() {
	return a;
}

int Quadrangle::get_b() {
	return b;
}

int Quadrangle::get_c() {
	return c;
}

int Quadrangle::get_d() {
	return d;
}

int Quadrangle::get_A() {
	return A;
}

int Quadrangle::get_B() {
	return B;
}

int Quadrangle::get_C() {
	return C;
}

int Quadrangle::get_D() {
	return D;
}

bool Quadrangle::check() {
	if (A + B + C + D == 360) return 1;
	else return 0;
}

void Quadrangle::print_info() {
	Figure::print_info();
	std::cout
		<< "Sides: a = " << get_a() << " b = " << get_b() << " c = " << get_c() << " d = " << get_d()
		<< "\nAngles: A = " << get_A() << " B = " << get_B() << " C = " << get_C() << " D = " << get_D() << "\n\n";
}