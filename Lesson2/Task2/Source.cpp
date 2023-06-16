#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

struct Account {
	int number = 0;
	string name = "";
	float money = 0;
};

void money_change(Account& acc, float sum) {
	acc.money = sum;
}

int main() {
	Account acc{};
	float sum = 0;

	cout << "Enter the account number: ";
	cin >> acc.number;
	cout << "Enter the owner: ";
	cin >> acc.name;
	cout << "Enter the balance: ";
	cin >> acc.money;

	cout << "Enter a new balance: ";
	cin >> sum;
	money_change(acc, sum);

	cout << "Your account: "
		<< acc.name << ", "
		<< acc.number << ", "
		<< acc.money << "\n";
		
	return 0;
}