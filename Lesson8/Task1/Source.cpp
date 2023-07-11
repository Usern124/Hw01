#include <iostream>
#include <string>

int function(std::string str, int forbidden_length) {
	int length = str.length();
	if (forbidden_length != length)
		return length;
	else throw std::exception("You have entered a word of forbidden length! Goodbye");
}

int main() {
	int forbidden_length = 0;
	std::string str;

	std::cout << "Enter the forbidden length: ";
	std::cin >> forbidden_length;

	for(;;) {
		std::cout << "Enter the word: ";
		std::cin >> str;
		try {
			std::cout << "The length of the word \"" << str << "\" is " << function(str, forbidden_length) << "\n";
		}

		catch (std::exception& exc) {
			std::cout << exc.what() << "\n";
			break;
		}

	};
}