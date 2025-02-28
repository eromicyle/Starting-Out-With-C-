/*Miles per Gallon
A car holds 12 gallons of gasoline and can travel 350 miles before refueling. Write a
program that calculates the number of miles per gallon the car gets. Display the result
on the screen.
Hint: Use the following formula to calculate miles per gallon (MPG):
MPG = Miles Driven / Gallons of Gas Used*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	
	float gallons, miles, MPG;
	
	gallons = 12;
	miles = 350;
	
	MPG = miles / gallons;
	
	cout << endl << "The number of miles per gallon car gets is :: " << MPG;
	
	getch();
}
