#include "class_Figure.h"
#include "class_Triangle.h"
#include "class_Quadrangle.h"
#include "class_Right_triangle.h"
#include "class_Isosceles_triangle.h"
#include "class_Equilateral_triangle.h"
#include "class_Parallelogram.h"
#include "class_Rectangle.h"
#include "class_Square.h"
#include "class_Rhomb.h"


int main() {
	Figure* p = 0;
	Figure f;
	Triangle t(10, 20, 30, 50, 60, 70);
	Right_triangle rt(10, 20, 30, 50, 60);
	Isosceles_triangle it(10, 20, 50, 60);
	Equilateral_triangle et(30);
	Quadrangle q(10, 20, 30, 40, 50, 60, 70, 80);
	Rectangle r(10, 20);
	Square s(20);
	Parallelogram parallelogram(20, 30, 30, 40);
	Rhomb rhomb(30, 30, 40);

	p = &f;
	p->print_info();
	p = &t;
	p->print_info();
	p = &rt;
	p->print_info();
	p = &it;
	p->print_info();
	p = &et;
	p->print_info();
	p = &q;
	p->print_info();
	p = &r;
	p->print_info();
	p = &s;
	p->print_info();
	p = &parallelogram;
	p->print_info();
	p = &rhomb;
	p->print_info();

}