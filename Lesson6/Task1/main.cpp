#include <iostream>
#include "math_functions.h"

int main() {
	int a = 0;
	int b = 0;
	int cmd = 0;

	std::cout << "Enter two numbers: ";
	std::cin >> a >> b;

	std::cout << "Select an operation (1 - addition, 2 - subtraction, 3 - multiplication, 4 - division, 5 - exponentiation): ";
	std::cin >> cmd;
	
		switch (cmd)
		{
		case 1:
			std::cout << "Result: " << add(a, b);
			break;
		case 2:
			std::cout << "Result: " << sub(a, b);
			break;
		case 3:
			std::cout << "Result: " << mul(a, b);
			break;
		case 4:
			std::cout << "Result: " << division(a, b);
			break;
		case 5:
			std::cout << "Result: " << exponentiation(a, b);
			break;
		default:
			break;
		}
}