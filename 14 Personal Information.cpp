/*Personal Information
Write a program that displays the following pieces of information, each on a separate line:
Your name
Your address, with city, state, and ZIP code
Your telephone number
Your college major
Use only a single cout statement to display all of this information.*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {

	cout << "Your name" << endl << "Your address, with city, state, and ZIP cod" << endl << "Your telephone number" << endl << "Your college major";
	// or
	cout << "\nYour name \nYour address, with city, state, and ZIP cod \nYour telephone number \nYour college major";

	getch();
}

