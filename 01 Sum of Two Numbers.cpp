/*Sum of Two Numbers
Q. Write a program that stores the integers 62 and 99 in variables, and stores the sum of
these two in a variable named total.*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	
	int num1, num2, total;
	num1 = 62;
	num2 = 99;
	
	total = num1 + num2;
	
	cout << "The sum of 62 and 99 is :: " << total;
	
	getch();
}
