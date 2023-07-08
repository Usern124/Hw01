#include <iostream>
#define MODE 1
#ifndef MODE
#error Define MODE!
#endif
#if MODE == 1
int add(int a, int b) { return a + b; };
#endif

int main() {
#if MODE == 0
	std::cout << "I'm working in training mode\n";
#elif MODE == 1
	int a = 0;
	int b = 0;
	std::cout << "I'm working in combat mode\n"
		<< "Enter two numbers: ";
	std::cin >> a >> b;
	std::cout << "Sum: " << add(a, b) << '\n';
#else
	std::cout << "Unknown mode. End of work\n";
#endif
	return 0;
}