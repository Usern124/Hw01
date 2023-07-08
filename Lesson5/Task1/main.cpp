#include <iostream>

class Figure {
public:
	Figure() {
		sides = 0;
	}

	Figure(int count) {
		sides = count;
	}

	int get() {
		return sides;
	}
protected:
	int sides;

};

class Triangle: public Figure {
public:
	Triangle():Figure(3){}
};

class Quadrangle: public Figure {
public:
	Quadrangle():Figure(4) {}
};

int main() {
	Figure f;
	Triangle t;
	Quadrangle q;
	
	std::cout << "Number of sides:\n"
		<< "figure: " << f.get() << '\n'
		<< "triangle: " << t.get() << '\n'
		<< "quadrangle: " << q.get() << '\n';
}