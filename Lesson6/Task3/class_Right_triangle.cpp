#include "class_Right_triangle.h"
//прямоугольный треугольник
Right_triangle::Right_triangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, 90) {
	name = "Right_triangle";
}