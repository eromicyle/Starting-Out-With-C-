/*Distance per Tank of Gas
A car with a 20-gallon gas tank averages 21.5 miles per gallon when driven in town
and 26.8 miles per gallon when driven on the highway. Write a program that calculates 
and displays the distance the car can travel on one tank of gas when driven in
town and when driven on the highway.
Hint: The following formula can be used to calculate the distance:
Distance = Number of Gallons × Average Miles per Gallon*/
 
#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	
	float gasTank, MPGT, MPGH, DIT, DIH;
	
	gasTank = 20.0;
	MPGT = 21.5;
	MPGH = 26.8;
	
	DIT = MPGT * gasTank;
	DIH = MPGH * gasTank;
	
	cout << endl << "The distance a car can travle with one tank os gas in Town is :: " << DIT << " miles";
	cout << endl << "The distance a car can travle with one tank os gas in Highway is :: " << DIH << " miles";
	
	getch();
}
