/*Energy Drink Consumption
A soft drink company recently surveyed 12,467 of its customers and found that
approximately 14 percent of those surveyed purchase one or more energy drinks per
week. Of those customers who purchase energy drinks, approximately 64 percent of
them prefer citrus flavored energy drinks. Write a program that displays the following:
 • The approximate number of customers in the survey who purchase one or more
 energy drinks per week
 • The approximate number of customers in the survey who prefer citrus flavored
 energy drinks*/
 
#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	
	float surveyedCoustomers, percent14, percent64, a1, b2;
	
	surveyedCoustomers = 12467;
	percent14 = 0.14;
	percent64 = 0.64;
	
	a1 = surveyedCoustomers*percent14;
	b2 = a1*percent64;
	
	cout << "The approximate number of customers in the survey who purchase one or more energy drinks per week is :: " << a1 << endl;
	cout << "The approximate number of customers in the survey who prefer citrus flavored energy drinks is :: " << b2;
	
	getch();
}

