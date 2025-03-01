/*Land Calculation
One acre of land is equivalent to 43,560 square feet. Write a program that calculates
the number of acres in a tract of land with 389,767 square feet.*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	
	float oneAcre, tractLand, totalAcres;
	
	oneAcre = 43560.0;
	tractLand = 389767.0;
	
	totalAcres = tractLand / oneAcre;
	
	cout << "The total Acra in 389767 squre feet is :: " << totalAcres;
	
	
	getch();
}
