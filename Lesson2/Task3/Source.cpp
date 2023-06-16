#include <iostream>
#include <string>
#include <fstream>

using std::cout;
using std::endl;
using std::string;
using std::fstream;

struct Adress {
	string city{};
	string street{};
	unsigned house = 0;
	unsigned flat = 0;
	unsigned index = 0;
};

void out(const Adress adr) {
	cout << "City: " << adr.city << endl;
	cout << "Street: " << adr.street << endl;
	cout << "House number: " << adr.house << endl;
	cout << "Flat number: " << adr.flat << endl;
	cout << "Index: " << adr.index << endl;

}

int main() {
	Adress adr[2]{
		{"Moscow", "Arbat", 12, 8, 123456},
		{"Izhevsk", "Pushkina", 59, 143, 953769}
	};

	out(adr[0]);
	cout << endl;
	out(adr[1]);

	return 0;
}