#include <iostream>
#include "FractionLuisA.h"
#include "FractionUtilityLuisA.h"
using namespace std;
FractionLuisA::FractionLuisA() : num(0), denom(1) {
	cout << "\nCalling Fraction()" << endl;
}
FractionLuisA::FractionLuisA(int n, int d) {
	cout << "\nCalling Fraction(int, int)" << endl;
	int gcd = 1;
	if (d == 0) {
		do {
			cout << "\n            The denominator cannot be zero!"
				<< "\n            Enter a new denominator: ";
			cin >> d;
		} while (d == 0);
	}
	if (d < 0) {
		n = -n;
		d = -d;
	}

	gcd = gcdBF(n, d);
	num = n / gcd;
	denom = d / gcd;
}

FractionLuisA::~FractionLuisA() {
	cout << "\nCalling ~Fraction() ..."
		"\n  num : " << num
		<< "\n  denom : " << denom << endl;
}

int FractionLuisA::gcdBF(int arg1, int arg2) {
	int gcd = 1;

	arg1 = (arg1 < 0) ? -arg1 : arg1;
	arg2 = (arg2 < 0) ? -arg2 : arg2;

	for (int i = 2; i <= arg1 && i <= arg2; i++) {
		if (arg1 % i == 0 && arg2 % i == 0) {
			gcd = i;
		}
	}
	return gcd;
}
FractionLuisA FractionLuisA::add(FractionLuisA*& rFr) const {
	return FractionLuisA(num * rFr->denom + rFr->num * denom,
		denom * rFr->denom);
}

FractionLuisA FractionLuisA::subtract(FractionLuisA*& rFr) const {
	return FractionLuisA(num * rFr->denom - rFr->num * denom,
		denom * rFr->denom);
}

FractionLuisA FractionLuisA::multiply(FractionLuisA*& rFr) const {
	return FractionLuisA(num * rFr->num, denom * rFr->denom);
}

FractionLuisA FractionLuisA::divide(FractionLuisA*& rFr) const {
	return FractionLuisA(num * rFr->denom, denom * rFr->num);
}
void FractionLuisA::print() const {
	cout << "\n          num : " << num
		<< "\n          denom : " << denom << endl;
}
void FractionLuisA::setDenom(int d) {
	int gcd;
	if (d == 0) {
		do {
			cout << "\n            The denominator cannot be zero!"
				<< "\n            Enter a new denominator: ";
			cin >> d;
		} while (d == 0);
	}
	if (d < 0) {
		num = -num;
		d = -d;
	}

	gcd = gcdBF(num, d);
	num /= gcd;
	denom = d / gcd;
}
int FractionLuisA::getDenom(void)const {
	return denom;
}
void FractionLuisA::setNum(int n) {
	int gcd;

	gcd = gcdBF(n, denom);
	num = n / gcd;
	denom /= gcd;
}
int FractionLuisA::getNum(void)const {
	return num;
}