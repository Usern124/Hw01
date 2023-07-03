#include <iostream>
#include <fstream>
#include <string>

class Address {
	
	std::string street;
	int house;
	int apartment;

public:
	std::string city;

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

void sort(Address* array, int size);

int main() {
	std::ifstream fin("in.txt");
	std::ofstream fout("out.txt");

	int size = 0;
	Address* array = 0;
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

	sort(array, size);

	fout << size << std::endl;
	for (int i = 0; i < size; ++i) {
		fout << array[i].get() << std::endl;
	}
	std::cout << "Changed\n";

	fin.close();
	fout.close();
	delete[] array;

	return 0;
}

void sort(Address* array, int size) {
	for (int i = 0; i < size; ++i)
		for (int j = 0; j < size - i - 1; ++j)
			if (array[j].city > array[j + 1].city) 
				std::swap(array[j], array[j + 1]);
}
