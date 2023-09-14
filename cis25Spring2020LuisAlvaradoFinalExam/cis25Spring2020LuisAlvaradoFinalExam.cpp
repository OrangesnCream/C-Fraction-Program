#include <iostream>
#include "FractionLuisA.h"
#include "FractionUtilityLuisA.h"
using namespace std;
//functions 
void runMenuFinal();
void header();
//main
int main() {
	header();
	runMenuFinal();
	return 0;
}
void header() {
	cout << "CIS 25 - C++ Programming\n"
		<< "Laney College\n"
		<< "Luis Alvarado Rivas\n"
		<< "\nAssignment Information --\n"
		<< "  Assignment Number: Final Exam,\n"
		<< "Written by:          Luis Alvarado-Rivas\n"
		<< "Due Date:            2/21/2020\n" << endl;
}
void runMenuFinal() {
	int usrMenu;
	FractionLuisA* rightFrac = { nullptr };
	FractionLuisA* leftFrac = { nullptr };
	FractionLuisA*& leftRef = leftFrac;
	FractionLuisA*& rightRef = rightFrac;
	do {
		cout <<"**************************\n"
			<< "*     MENU - Final Exam  *\n"
			<< "*   1. Initializing      *\n"
			<< "*   2. Adding            *\n"
			<< "*   3. Printing          *\n"
			<< "*   4.Quit               *\n"
			<< "**************************\n"
			<< "Select an option (use integer value only):_____\b\b\b\b\b";
		cin >> usrMenu;

		switch (usrMenu) {
		case 1: {
			cout << "\n  INITIALIZING Option -"
				<< "\n    Calling initMenu()";
			initMenu(leftRef, rightRef);
			break;
		}
		case 2: {
			if (rightFrac != nullptr) {
				addMenu(leftRef, rightRef);
			}
			else {
				cout << "\nNo Fractions Available\n";
			}
			break;
		}
		case 3: {
			if (rightFrac != nullptr) {
				printMenu(leftRef, rightRef);
			}
			else {
				cout << "\nNo Fractions Available\n";
			}
			break;
		}
		case 4: {
			cout << "\nHave fun . . .!" << endl;
			break;
		}
		default:
			cout << endl << "not available" << endl;
			break;
		}

	} while (usrMenu != 4);
	delete rightFrac;
	rightFrac = nullptr;
	delete leftFrac;
	leftFrac = nullptr;
}
/*
CIS 25 - C++ Programming
Laney College
Luis Alvarado Rivas

Assignment Information --
  Assignment Number: Final Exam,
Written by:          Luis Alvarado-Rivas
Due Date:            2/21/2020

**************************
*     MENU - Final Exam  *
*   1. Initializing      *
*   2. Adding            *
*   3. Printing          *
*   4.Quit               *
**************************
Select an option (use integer value only):1____

  INITIALIZING Option -
	Calling initMenu()
**************************
* SubMENU - INITIALIZING *
*  1. Creating           *
*  2. Updating           *
*  3. Returning          *
**************************
Select an option (integer only):1

  Creating 2 NEW Fraction Objects--

	Calling init()
		Create Left Fraction
Calling Fraction()

		  Enter num:1

		  Enter denom:2

		  num : 1
		  denom : 2

		Create Right Fraction
Calling Fraction()

		  Enter num:1

		  Enter denom:4

		  num : 1
		  denom : 4

**************************
* SubMENU - INITIALIZING *
*  1. Creating           *
*  2. Updating           *
*  3. Returning          *
**************************
Select an option (integer only):3
Returning to Previous Menu. . .
**************************
*     MENU - Final Exam  *
*   1. Initializing      *
*   2. Adding            *
*   3. Printing          *
*   4.Quit               *
**************************
Select an option (use integer value only):2____


  ADDING Option -
		********************************
		*     Sub Menu -- ADDING       *
		*  1. add() - Member           *
		*  2. add() - Stand Alone      *
		*  3. Return to Previous MENU  *
		********************************
		Select an option (1, 2, or 3):1

		  Calling member add() -
Printing results . . .

Calling Fraction(int, int)

Calling ~Fraction() ...
  num : 3
  denom : 4

		********************************
		*     Sub Menu -- ADDING       *
		*  1. add() - Member           *
		*  2. add() - Stand Alone      *
		*  3. Return to Previous MENU  *
		********************************
		Select an option (1, 2, or 3):3

		Returning to previous menu! ! !
**************************
*     MENU - Final Exam  *
*   1. Initializing      *
*   2. Adding            *
*   3. Printing          *
*   4.Quit               *
**************************
Select an option (use integer value only):3____
  PRINTING Option -
		********************************
		*     Sub Menu -- PRINTING     *
		*  1. print() - Member         *
		*  2. print() - Stand Alone    *
		*  3. Return to Previous MENU  *
		********************************
		Select an option (1, 2, or 3):1

		  Calling member print() -
			Left Fraction -
		  num : 1
		  denom : 2

		  Calling member print() -
			Right Fraction -
		  num : 1
		  denom : 4

		********************************
		*     Sub Menu -- PRINTING     *
		*  1. print() - Member         *
		*  2. print() - Stand Alone    *
		*  3. Return to Previous MENU  *
		********************************
		Select an option (1, 2, or 3):3

		Returning to previous menu! ! !
**************************
*     MENU - Final Exam  *
*   1. Initializing      *
*   2. Adding            *
*   3. Printing          *
*   4.Quit               *
**************************
Select an option (use integer value only):1____

  INITIALIZING Option -
	Calling initMenu()
**************************
* SubMENU - INITIALIZING *
*  1. Creating           *
*  2. Updating           *
*  3. Returning          *
**************************
Select an option (integer only):2

		Calling updateMenu()


				******************************
				* SubMENU - UPDATING         *
				*  1. Left Fraction          *
				*  2. Right Fraction         *
				*  3. Left & Right Fractions *
				*  4. Returning              *
				******************************
				Select an option(integer only):3

				  Update Left Fraction
		  Enter num:5

		  Enter denom:4

		  num : 5
		  denom : 4

				  Update Right Fraction
		  Enter num:6

		  Enter denom:7

		  num : 6
		  denom : 7


				******************************
				* SubMENU - UPDATING         *
				*  1. Left Fraction          *
				*  2. Right Fraction         *
				*  3. Left & Right Fractions *
				*  4. Returning              *
				******************************
				Select an option(integer only):4

		Returning to previous menu!


**************************
* SubMENU - INITIALIZING *
*  1. Creating           *
*  2. Updating           *
*  3. Returning          *
**************************
Select an option (integer only):3
Returning to Previous Menu. . .
**************************
*     MENU - Final Exam  *
*   1. Initializing      *
*   2. Adding            *
*   3. Printing          *
*   4.Quit               *
**************************
Select an option (use integer value only):3____
  PRINTING Option -
		********************************
		*     Sub Menu -- PRINTING     *
		*  1. print() - Member         *
		*  2. print() - Stand Alone    *
		*  3. Return to Previous MENU  *
		********************************
		Select an option (1, 2, or 3):1

		  Calling member print() -
			Left Fraction -
		  num : 5
		  denom : 4

		  Calling member print() -
			Right Fraction -
		  num : 6
		  denom : 7

		********************************
		*     Sub Menu -- PRINTING     *
		*  1. print() - Member         *
		*  2. print() - Stand Alone    *
		*  3. Return to Previous MENU  *
		********************************
		Select an option (1, 2, or 3):3

		Returning to previous menu! ! !
**************************
*     MENU - Final Exam  *
*   1. Initializing      *
*   2. Adding            *
*   3. Printing          *
*   4.Quit               *
**************************
Select an option (use integer value only):4____

Have fun . . .!

Calling ~Fraction() ...
  num : 6
  denom : 7

Calling ~Fraction() ...
  num : 5
  denom : 4

*/
//COMMENTS 
// no comments :)