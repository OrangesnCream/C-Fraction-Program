#include <iostream>
#include "FractionLuisA.h"
#include "FractionUtilityLuisA.h"
using namespace std;
void init(FractionLuisA*& Frac) {
	int n;
	int d;
	Frac = (Frac == nullptr) ? new FractionLuisA : Frac;
	cout << "\n\t  Enter num:";
	cin >> n;
	cout << "\n\t  Enter denom:";
	cin >> d;
	Frac->setNum(n);
	Frac->setDenom(d);
	Frac->print();
}
void print(FractionLuisA*& leftFrac, FractionLuisA*& rightFrac) {
	cout << "\n\t    Left Fraction -";
	cout << "\n          num : " << leftFrac->num
		<< "\n          denom : " << leftFrac->denom << endl;
	cout << "\n\t    Right Fraction -";
	cout << "\n          num : " << rightFrac->num
		<< "\n          denom : " << rightFrac->denom << endl;
}
FractionLuisA add(FractionLuisA*& leftFrac, FractionLuisA*& rightFrac) {
	return FractionLuisA(leftFrac->num * rightFrac->denom + rightFrac->num * leftFrac->denom,
		leftFrac->denom * rightFrac->denom);

}

void addMenu(FractionLuisA*& leftFrac, FractionLuisA*& rightFrac) {
	int usrMenu;
	FractionLuisA* tmp = { nullptr };
	cout << "\n\n  ADDING Option -";
	do {
		cout << "\n\t********************************"
			<< "\n\t*     Sub Menu -- ADDING       *"
			<< "\n\t*  1. add() - Member           *"
			<< "\n\t*  2. add() - Stand Alone      *"
			<< "\n\t*  3. Return to Previous MENU  *"
			<< "\n\t********************************"
			<< "\n\tSelect an option (1, 2, or 3):";
		cin >> usrMenu;
		switch (usrMenu) {
		case 1:
			cout << "\n\t  Calling member add() -";
			cout << "\nPrinting results . . ." << endl;
			leftFrac->add(rightFrac);
			break;
		case 2:
			cout << "\n\t  Calling stand-alone add() -";
			cout << "\nPrinting results . . ." << endl;
			add(leftFrac, rightFrac);
			break;
		case 3:
			cout << "\n\tReturning to previous menu! ! !" << endl;
			break;
		default:
			cout << "\n\tWrong Option! ! !" << endl;
			break;
		}

	} while (usrMenu != 3);
	delete tmp;
	tmp = nullptr;

}
void printMenu(FractionLuisA*& leftFrac, FractionLuisA*& rightFrac) {
	int usrMenu;
	cout << "  PRINTING Option -";
	do {
		cout << "\n\t********************************"
			<< "\n\t*     Sub Menu -- PRINTING     *"
			<< "\n\t*  1. print() - Member         *"
			<< "\n\t*  2. print() - Stand Alone    *"
			<< "\n\t*  3. Return to Previous MENU  *"
			<< "\n\t********************************"
			<< "\n\tSelect an option (1, 2, or 3):";
		cin >> usrMenu;
		switch (usrMenu) {
		case 1:
			cout << "\n\t  Calling member print() -"
				<< "\n\t    Left Fraction -";
			leftFrac->print();
			cout << "\n\t  Calling member print() -"
				<< "\n\t    Right Fraction -";
			rightFrac->print();
			break;
		case 2:
			cout << "\n\t  Calling stand-alone print() -";
			print(leftFrac, rightFrac);
			break;
		case 3:
			cout << "\n\tReturning to previous menu! ! !" << endl;
			break;
		default:
			cout << "\n\tWrong Option! ! !" << endl;
			break;
		}
	} while (usrMenu != 3);
}
void updateMenu(FractionLuisA*& leftFrac, FractionLuisA*& rightFrac) {
	int usrMenu;
	do {
		cout << "\n\n\t\t******************************"
			<< "\n\t\t* SubMENU - UPDATING         *"
			<< "\n\t\t*  1. Left Fraction          *"
			<< "\n\t\t*  2. Right Fraction         *"
			<< "\n\t\t*  3. Left & Right Fractions *"
			<< "\n\t\t*  4. Returning              *"
			<< "\n\t\t******************************"
			<< "\n\t\tSelect an option(integer only):";
		cin >> usrMenu;
		switch (usrMenu) {
		case 1:
			cout << "\n\t\t  Updating Left Fraction";
			init(leftFrac);
			break;
		case 2:
			cout << "\n\t\t  Updating Right Fraction";
			init(rightFrac);
			break;
		case 3:
			cout << "\n\t\t  Update Left Fraction";
			init(leftFrac);
			cout << "\n\t\t  Update Right Fraction";
			init(rightFrac);
			break;
		case 4:
			cout << "\n\tReturning to previous menu!" << endl;
			break;
		default:
			cout << "\n\tNot an available option" << endl;
			break;
		}
	} while (usrMenu != 4);
}
void initMenu(FractionLuisA*& leftFrac, FractionLuisA*& rightFrac) {
	int usrMenu;
	do {
		cout << "\n**************************"
			<< "\n* SubMENU - INITIALIZING *"
			<< "\n*  1. Creating           *"
			<< "\n*  2. Updating           *"
			<< "\n*  3. Returning          *"
			<< "\n**************************"
			<< "\nSelect an option (integer only):";
		cin >> usrMenu;
		switch (usrMenu) {
		case 1:
			cout << "\n  Creating 2 NEW Fraction Objects--\n"
				<< "\n    Calling init()";
			cout << "\n\tCreate Left Fraction";
			init(leftFrac);
			cout << "\n\tCreate Right Fraction";
			init(rightFrac);
			break;
		case 2:
			if (leftFrac != nullptr) {
				cout << "\n\tCalling updateMenu() ";
				updateMenu(leftFrac, rightFrac);
			}
			else {
				cout << "\n\tNo Fraction Available!!!";
			}
			break;
		case 3:
			cout << "Returning to Previous Menu. . ." << endl;
			break;
		default:
			cout << "WRONG OPTION >:(";
			break;
		}
	} while (usrMenu != 3);

}
