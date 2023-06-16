#include <iostream>

using std::cout;
using std::cin;

enum  Months {
	January = 1,
	February,
	March,
	April,
	May,
	June,
	July,
	August,
	September,
	October,
	November,
	December
};

int main() {
	int n = 0;
	
	do {
		cout << "Enter the month number\n";
		cin >> n;

		switch (static_cast<Months>(n))
		{
		case January:
			cout << "January\n";
			break;
		case February:
			cout << "February\n";
			break;
		case March:
			cout << "March\n";
			break;
		case April:
			cout << "April\n";
			break;
		case May:
			cout << "May\n";
			break;
		case June:
			cout << "June\n";
			break;
		case July:
			cout << "July\n";
			break;
		case August:
			cout << "August\n";
			break;
		case September:
			cout << "September\n";
			break;
		case October:
			cout << "October\n";
			break;
		case November:
			cout << "November\n";
			break;
		case December:
			cout << "December\n";
			break;
		case 0:
			cout << "Goodbye!\n";
			continue;
		default:
			cout << "Wrong number\n";
			break;
		}
		
	} while (n != 0);

	return 0;
}