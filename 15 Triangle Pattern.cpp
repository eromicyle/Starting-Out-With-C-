/*Triangle Pattern
Write a program that displays the following pattern on the screen:
      *
     ***
    *****
   ******* */
   
#include <iostream>
#include <conio.h>

using namespace std;

int main() {

	int rows=4;
	
	for(int i=1; i<=rows; ++i) {
		for(int j=1; j<=rows-i; ++j){
			cout << " ";
		}
		for(int k=1; k<=2*i-1; ++k) {
			cout << "*";
		}
		cout << endl;
	}

	getch();
}

