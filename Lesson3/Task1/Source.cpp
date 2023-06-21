#include <iostream>

class Calculator {
	double num1 = 0;
	double num2 = 0;

public:
	double add() { return num1 + num2; }
	double multiply() { return num1 * num2; }
	double subtract_1_2() { return num1 - num2; }
	double subtract_2_1() { return num2 - num1; }
	double divide_1_2() { return num1 / num2; }
	double divide_2_1() { return num2 / num1; }

	bool set_num1(double num1) {
		if (num1 != 0) {
			this->num1 = num1;
			return 1;
		}
		else return 0;
	}

	bool set_num2(double num2) {
		if (num2 != 0) {
			this->num2 = num2;
			return 1;
		}
		else return 0;
	}

};

int main() {
	double num1 = 0;
	double num2 = 0;
	Calculator calc;

	
	for (;;) {
		for (;;) {
			std::cout << "Enter num1: ";
			std::cin >> num1;
			if (calc.set_num1(num1)) break;
			std::cout << "Invalid input!";
		}

		for (;;) {
			std::cout << "Enter num2: ";
			std::cin >> num2;
			if (calc.set_num2(num2)) break;
			std::cout << "Invalid input!\n";
			
		}
			
		std::cout <<
			"num1 + num2 = " << calc.add() << std::endl <<
			"num1 - num2 = " << calc.subtract_1_2() << std::endl <<
			"num2 - num1 = " << calc.subtract_2_1() << std::endl <<
			"num1 * num2 = " << calc.multiply() << std::endl <<
			"num1 / num2 = " << calc.divide_1_2() << std::endl <<
			"num2 / num1 = " << calc.divide_2_1() << std::endl;
	}							

	return 0;
}