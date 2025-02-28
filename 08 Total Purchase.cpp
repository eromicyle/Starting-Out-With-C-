/*Total Purchase
A customer in a store is purchasing five items. The prices of the five items are:
Price of item 1 = $12.95
Price of item 2 = $24.95
Price of item 3 = $6.95
Price of item 4 = $14.95
Price of item 5 = $3.95
Write a program that holds the prices of the five items in five variables. Display each
item’s price, the subtotal of the sale, the amount of sales tax, and the total. Assume
the sales tax is 6%*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	
	float item[5]={12.95, 24.95, 6.95, 14.95, 3.95}, subTotal, tax, grandTotal;
	
	for(int i=0; i<5; i++) {
		cout << endl << "The price of item " << i+1 << " is :: $" << item[i];
	}
	
	for(int j=0; j<5; j++) {
		subTotal += item[j];
	}
	
	cout << endl << endl << "The subtotal is :: $" << subTotal;
	
	tax = subTotal * 0.06;
	
	cout << endl << "Sales Tax is :: $" << tax;
	
	grandTotal = subTotal + tax;
	
	cout << endl << "Grand Total is :: $" << grandTotal;
	
	getch();
}
