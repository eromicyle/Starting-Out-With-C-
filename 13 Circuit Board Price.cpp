/*Circuit Board Price
An electronics company sells circuit boards at a 40 percent profit. Write a program
that will calculate the selling price of a circuit board that costs $12.67. Display the
result on the screen.*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {

	float profitPercent, itemCost, profit, sellingPrice;
	
	profitPercent = 0.4;
	itemCost = 12.67;
	
	profit = profitPercent * itemCost;
	
	sellingPrice = itemCost+profit;
	
	cout << "The selling price of the item is :: " << sellingPrice;

	getch();
}

