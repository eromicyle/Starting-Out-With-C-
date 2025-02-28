/*Cyborg Data Type Sizes
You have been given a job as a programmer on a Cyborg supercomputer. In order to
accomplish some calculations, you need to know how many bytes the following data
types use: char, int, float, and double. You do not have any manuals, so you can’t
look this information up. Write a C++ program that will determine the amount of
memory used by these types and display the information on the screen.*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	
	cout << "The size of an character is :: " << sizeof(char) << " bytes" << endl;
	cout << "The size of an integer is :: " << sizeof(int) << " bytes" << endl;
	cout << "The size of an float is :: " << sizeof(float) << " bytes" << endl;
	cout << "The size of an double is :: " << sizeof(double) << " bytes" << endl;
	
	getch();
}
