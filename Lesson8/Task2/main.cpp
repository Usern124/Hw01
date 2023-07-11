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
	try
	{
		//Triangle t(10, 20, 30, 50, 60, 70);
		//Right_triangle rt(10, 20, 30, 50, 60);
		//Isosceles_triangle it(10, 20, 50, 60);
		Equilateral_triangle et(30);

		std::cout << et.get_name() << " (sides " << et.get_a() << ", " << et.get_b() << ", " << et.get_c() << "; angles " << et.get_A() << ", " << et.get_B() << ", " << et.get_C() << ") is created\n";

	}

	catch (Incorrect_params& exc) {
		std::cout << "Error creating the figure. Why: " << exc.what() << "\n";
	}

	try
	{
		//Quadrangle q(10, 20, 30, 40, 50, 60, 70, 80);
		//Rectangle r(10, 20);
		//Square s(20);
		Parallelogram parallelogram(20, 30, 30, 40);
		//Rhomb rhomb(30, 30, 40);

		std::cout << parallelogram.get_name() << " (sides " << parallelogram.get_a() << ", " << parallelogram.get_b() << ", " << parallelogram.get_c() << ", " << parallelogram.get_d() << "; angles " << parallelogram.get_A() << ", " << parallelogram.get_B() << ", " << parallelogram.get_C() << ", " << parallelogram.get_D() << ") is created\n";
	}

	catch (Incorrect_params& exc) {
		std::cout << "Error creating the figure. Why: " << exc.what() << "\n";
	}
	
}