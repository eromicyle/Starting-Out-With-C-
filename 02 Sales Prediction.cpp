/*Sales Prediction
The East Coast sales division of a company generates 62 percent of total sales. Based on that percentage, 
write a program that will predict how much the East Coast division will generate if the company has $4.6 million in sales this year.*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	
	int salePercent, yearRevenue, revenueGenerated;
	
	salePercent = 0.62;
	yearRevenue = 4600000;
	revenueGenerated = yearRevenue*salePercent;
	
	cout << "The East Coast division will generate :: " << revenueGenerated << " this year.";
	
	getch();
}
