/*Ocean Levels
Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, write a
program that displays:
• The number of millimeters higher than the current level that the ocean’s level will
be in 5 years
• The number of millimeters higher than the current level that the ocean’s level will
be in 7 years
• The number of millimeters higher than the current level that the ocean’s level will
be in 10 years*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	
	float oceanLvl0, oceanLvl1, oceanLvl2, oceanLvl3;
	
	oceanLvl0 = 1.5;
	oceanLvl1 = 1.5*5;
	oceanLvl2 = 1.5*7;
	oceanLvl3 = 1.5*10;
	
	cout << endl << "The ocean level after 5 years will be :: " << oceanLvl1 << endl;
	cout << endl << "The ocean level after 7 years will be :: " << oceanLvl2 << endl;
	cout << endl << "The ocean level after 10 years will be :: " << oceanLvl3 << endl;
	
	getch();
}
