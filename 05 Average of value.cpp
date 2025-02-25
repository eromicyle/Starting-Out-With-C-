/*Average of Values
Q. To get the average of a series of values, you add the values up and then divide the sum by
the number of values. Write a program that stores the following values in five different
variables: 28, 32, 37, 24, and 33. The program should first calculate the sum of these five
variables and store the result in a separate variable named sum. Then, the program
should divide the sum variable by 5 to get the average. Display the average on the screen.*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	
	int num[5]={28, 32, 37, 24, 33}, sum=0;
	float avg;
	
	for(int i=0; i<5; i++) {
		sum += num[i];
	}
	
	avg = sum/5.0;
	
	cout << "The sum of these numbers is :: " << sum << endl << endl;
	cout << "The Average of These number is :: " << avg;
	
	
	getch();
}
