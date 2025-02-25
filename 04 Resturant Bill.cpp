/*Restaurant Bill
Q. Write a program that computes the tax and tip on a restaurant bill for a patron with a
$44.50 meal charge. The tax should be 6.75 percent of the meal cost. The tip should
be 15 percent of the total after adding the tax. Display the meal cost, tax amount, tip
amount, and total bill on the screen*/

#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main() {
	
	float mealCharges, tax, mealTax, mealAfterTax, tip, mealTip, totalBill;
	mealCharges = 44.50;
	tax = 0.0675;
	mealTax = mealCharges*tax;
	mealAfterTax = mealTax + mealCharges;
	tip = 0.15;
	mealTip = mealAfterTax*tip;
	totalBill = mealTip + mealAfterTax;
	
	cout << "Meal Charges :: " << mealCharges << setprecision(3) << endl;
	cout << "Tax :: " << mealTax << setprecision(3) << endl;
	cout << "Tip :: " << mealTip << setprecision(3) << endl;
	cout << "Total Bill :: " << setprecision(3) << totalBill;
	
	getch();
}
