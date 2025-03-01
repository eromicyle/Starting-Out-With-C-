/*Stock Commission
Kathryn bought 600 shares of stock at a price of $21.77 per share. 
She must pay her stock broker a 2 percent commission for the transaction. 
Write a program that calculates and displays the following:
 • The amount paid for the stock alone (without the commission)
 • The amount of the commission
 • The total amount paid (for the stock plus the commission)*/
 
#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	
	float sharesBought, sharesPrice, brokerCommission, stocksAmount, commissionAmount, totalAmount;
	
	sharesBought = 600;
	sharesPrice = 21.77;
	brokerCommission = 0.02;
	
	stocksAmount = 600*21.77;
	commissionAmount = stocksAmount*brokerCommission;
	totalAmount = stocksAmount+commissionAmount;
	
	cout << "The amount paid for the stock alone (without the commission) is :: $" << stocksAmount << endl;
	cout << "The amount of the commission is :: $" << commissionAmount << endl;
	cout << "The total amount paid (for the stock plus the commission) is :: $" << totalAmount;
	
	getch();
}

