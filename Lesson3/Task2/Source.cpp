#include <iostream>
#include <string>

class Counter {
	int count;

public:
	Counter() { count = 1; }
	Counter(int n){	count = n; }

	void increase() { ++count; }
	void decrease() { --count; }

	void status() { std::cout << count << '\n'; }
};


int main() {
	Counter* count;
	std::string cmd;
	
	std::cout << "Do you want to enter the initial value of the counter? Enter yes or no: ";
	std::cin >> cmd;

	if (cmd == "yes") {
		int n = 0;
		std::cout << "Enter the initial value of the counter: ";
		std::cin >> n;
		count = new Counter(n);
	}
	else count = new Counter();

	for (;;) {
		std::cout << "Enter the command ('+', '-', '=' or 'x'): ";
		std::cin >> cmd;

		switch (cmd[0])
		{
		case '+':
			count->increase();
			break;
		case '-':
			count->decrease();
			break;
		case '=':
			count->status();
			break;
		case 'x':
			std::cout << "Goodbye!";
			return 0;
		default:
			break;
		}
	}
}