/*Sales Tax
Q. Write a program that will compute the total sales tax on a $52 purchase. Assume the
state sales tax is 4 percent and the county sales tax is 2 percent.*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	
	float stateSalesTax, countrySaleTax, totalTax, purchase, totalSaleTax, finalBill;
	
	stateSalesTax = 0.04;
	countrySaleTax = 0.02;
	totalTax = stateSalesTax + countrySaleTax;
	purchase = 52;
	
	totalSaleTax = purchase*totalTax;
	
	finalBill = purchase + totalSaleTax;
	
	cout << "Total Swales Tax is equal to :: " << totalSaleTax << endl;
	
	cout << "The Grand Bill after applying Tax is :: " << finalBill;
	
	getch();
}
