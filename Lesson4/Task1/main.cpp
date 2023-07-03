#include <iostream>
#include <fstream>
#include <string>

class Address {
	std::string city;
	std::string street;
	int house;
	int apartment;

public:
	Address() {
		city = "";
		street = "";
		house = 0;
		apartment = 0;
	};

	Address(std::string city, std::string street, int house, int apartment) {
		this->city = city;
		this->street = street;
		this->house = house;
		this->apartment = apartment;
	}

	std::string get() {
		return city + ", " + street + ", " + std::to_string(house) + ", " + std::to_string(apartment);
	}
};

int main() {
	std::ifstream fin("in.txt");
	std::ofstream fout("out.txt");

	int size = 0;
	Address* array;
	std::string city = "";
	std::string street = "";
	int house = 0;
	int apartment = 0;

	if (!fin.is_open()) {
		std::cout << "Input file not found\n";
		return 1;
	}

	fin >> size;
	array = new Address[size];


	for (int i = 0; i < size; ++i) {
		fin >> city >> street >> house >> apartment;
		array[i] = Address(city, street, house, apartment);
	}

	fout << size << std::endl;
	for (int i = size - 1; i >= 0; --i) {
		fout << array[i].get() << std::endl;
	}
	std::cout << "Changed\n";

	fin.close();
	fout.close();
	delete[] array;

	return 0;
}