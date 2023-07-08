#include <iostream>
#include <string>

class Figure {
public:
	Figure() {
		sidesCount = 0;
	}

	Figure(int count) {
		sidesCount = count;
	}

	std::string get_name() {
		return name;
	}

	int get_sidesCount() {
		return sidesCount;
	}

protected:
	std::string name;
	int sidesCount;
};
//треугольник
class Triangle : public Figure {
public:
	Triangle(int a, int b, int c, int A, int B, int C): Figure(3) {
		name = "Triangle";

		this->a = a;
		this->b = b;
		this->c = c;
		
		this->A = A;
		this->B = B;
		this->C = C;
	}


	int get_a() {
		return a;
	}

	int get_b() {
		return b;
	}

	int get_c() {
		return c;
	}

	int get_A() {
		return A;
	}

	int get_B() {
		return B;
	}

	int get_C() {
		return C;
	}

	void print_info() {
		std::cout << get_name() << ":\n"
			<< "Sides: a = " << get_a() << " b = " << get_b() << " c = " << get_c()
			<< "\nAngles: A = " << get_A() << " B = " << get_B() << " C = " << get_C() << "\n\n";
	}
protected:
	int a, b, c;
	int A, B, C;
};
//четырехугольник
class Quadrangle : public Figure {
public:
	Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D):Figure(4){
		name = "Quadrangle";
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;

		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;
	}

	int get_a() {
		return a;
	}

	int get_b() {
		return b;
	}

	int get_c() {
		return c;
	}

	int get_d() {
		return d;
	}

	int get_A() {
		return A;
	}

	int get_B() {
		return B;
	}

	int get_C() {
		return C;
	}

	int get_D() {
		return D;
	}

	void print_info() {
		std::cout << get_name() << ":\n"
			<< "Sides: a = " << get_a() << " b = " << get_b() << " c = " << get_c() << " d = " << get_d()
			<< "\nAngles: A = " << get_A() << " B = " << get_B() << " C = " << get_C() << " D = " << get_D() << "\n\n";
	}
protected:
	int a, b, c, d;
	int A, B, C, D;
};
//прямоугольный треугольник
class Right_triangle : public Triangle {
public:
	Right_triangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, 90) {
		name = "Right_triangle";
	}
};
//равнобедренный треугольник
class Isosceles_triangle : public Triangle {
public:
	Isosceles_triangle(int a, int b, int A, int B): Triangle(a, b, a, A, B, A) {
		name = "Isosceles_triangle";
	}
};
//равносторонний треугольник
class Equilateral_triangle : public Triangle {
public:
	Equilateral_triangle(int a) : Triangle(a, a, a, 60, 60, 60) {
		name = "Equilateral_triangle";
	}
};
//параллелограм
class Parallelogram : public Quadrangle {
public:
	Parallelogram(int a, int b, int A, int B) : Quadrangle(a, b, a, b, A, B, A, B) {
		name = "Parallelogram";
	}
};
//прямоугольник
class Rectangle : public Parallelogram {
public:
	Rectangle(int a, int b) : Parallelogram(a, b, 90, 90) {
		name = "Rectangle";
	}
};
//ромб
class Rhomb : public Parallelogram {
public:
	Rhomb(int a, int A, int B) : Parallelogram(a, a, A, B) {
		name = "Rhomb";
	}
};
//квадрат
class Square : public Rectangle {
public:
	Square(int a) : Rectangle(a, a) {
		name = "Square";
	}
};



int main() {
	Figure f;
	Triangle t(10, 20, 30, 50, 60, 70);
	Right_triangle rt(10, 20, 30, 50, 60);
	Isosceles_triangle it(10, 20, 50, 60);
	Equilateral_triangle et(30);
	Quadrangle q(10, 20, 30, 40, 50, 60, 70, 80);
	Rectangle r(10, 20);
	Square s(20);
	Parallelogram p(20, 30, 30, 40);
	Rhomb rhomb(30, 30, 40);


	t.print_info();
	rt.print_info();
	it.print_info();
	et.print_info();
	q.print_info();
	r.print_info();
	s.print_info();
	p.print_info();
	rhomb.print_info();
	
}