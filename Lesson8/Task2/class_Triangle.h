#pragma once
#include "class_Figure.h"
//треугольник
class Triangle : public Figure {
public:
	Triangle(int a, int b, int c, int A, int B, int C);

	int get_a();
	int get_b();
	int get_c();
	int get_A();
	int get_B();
	int get_C();

	bool check() override;
	void print_info() override;
protected:
	int a, b, c;
	int A, B, C;
};