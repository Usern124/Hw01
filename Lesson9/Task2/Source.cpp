#include <iostream>
#include <string>

class Fraction
{
private:
	int numerator_;
	int denominator_;
	int gcd;

public:
	Fraction() {
		std::cin >> numerator_ >> denominator_;
		gcd = std::abs(GCD(numerator_, denominator_));
		numerator_ /= gcd;
		denominator_ /= gcd;
	}
	Fraction(int numerator, int denominator)
	{
		gcd = std::abs(GCD(numerator, denominator));
		numerator_ = numerator / gcd;
		denominator_ = denominator / gcd;
	}

	int GCD(int a, int b) {
		return b ? GCD(b, a % b) : a;
	}

	std::string print() {
		return std::to_string(numerator_) + '/' + std::to_string(denominator_);
	}

	bool operator==(Fraction right) {
		return (numerator_ * right.denominator_) == (right.numerator_ * denominator_);
	}
	bool operator!=(Fraction right) {
		return !(*this == right);
	}
	bool operator<(Fraction right) {
		return (numerator_ * right.denominator_) < (right.numerator_ * denominator_);
	}
	bool operator>(Fraction right) {
		return right < *this;
	}
	bool operator<=(Fraction right) {
		return !(*this > right);
	}
	bool operator>=(Fraction right) {
		return !(*this < right);
	}

	friend Fraction operator+(Fraction, Fraction);
	friend Fraction operator-(Fraction, Fraction);
	friend Fraction operator*(Fraction, Fraction);
	friend Fraction operator/(Fraction, Fraction);
	//friend Fraction operator++(Fraction&);
	//friend Fraction operator--(Fraction&);
	//friend Fraction operator++(Fraction, int);
	//friend Fraction operator--(Fraction, int);

	Fraction operator++() {
		numerator_ += denominator_;
		return *this;
	}

	Fraction operator--() {
		numerator_ -= denominator_;
		return *this;
	}

	Fraction operator++(int) {
		Fraction tmp = *this;
		++(*this);
		return tmp;
	}

	Fraction operator--(int) {
		Fraction tmp = *this;
		--(*this);
		return tmp;
	}
};

Fraction operator+(Fraction left, Fraction right) {
	return Fraction((left.numerator_*right.denominator_ + right.numerator_*left.denominator_), right.denominator_*left.denominator_);
}

Fraction operator-(Fraction left, Fraction right) {
	return Fraction((left.numerator_ * right.denominator_ - right.numerator_ * left.denominator_), left.denominator_ * right.denominator_);
}

Fraction operator*(Fraction left, Fraction right) {
	return Fraction((left.numerator_ * right.numerator_), (right.denominator_ * left.denominator_));
}

Fraction operator/(Fraction left, Fraction right) {
	return Fraction((left.numerator_ * right.denominator_), (left.denominator_ * right.numerator_));
}



int main()
{
	Fraction* f1 = 0;
	Fraction* f2 = 0;

	std::cout << "Enter the numerator and denominator of the fraction 1: ";
	f1 = new Fraction();
	std::cout << "Enter the numerator and denominator of the fraction 2: ";
	f2 = new Fraction();

	std::cout << f1->print() << " + " << f2->print() << " = " << (*f1 + *f2).print() << "\n";	//3 / 4 + 4 / 5 = 31 / 20
	std::cout << f1->print() << " - " << f2->print() << " = " << (*f1 - *f2).print() << "\n";	//3 / 4 - 4 / 5 = -1 / 20
	std::cout << f1->print() << " * " << f2->print() << " = " << (*f1 * *f2).print() << "\n";	//3 / 4 * 4 / 5 = 3 / 5
	std::cout << f1->print() << " / " << f2->print() << " = " << (*f1 / *f2).print() << "\n";	//3 / 4 / 4 / 5 = 15 / 16
	std::cout << "++" << f1->print() << " * " << f2->print() << " = ";
	std::cout << (++(*f1) * *f2).print() << "\n";												//++3 / 4 * 4 / 5 = 7 / 5
	std::cout << "Value fraction 1: " << f1->print() << "\n";
	std::cout << f1->print() << "-- * " << f2->print() << " = ";
	std::cout << ((*f1)-- * *f2).print() << "\n";		//7 / 4-- * 4 / 5 = 7 / 5
	std::cout << "Value fraction 1: " << f1->print() << "\n";
	
	delete f1;
	delete f2;

	return 0;
}