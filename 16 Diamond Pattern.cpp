/*Diamond Pattern
Write a program that displays the following pattern:
   *
  ***
 *****
*******
 *****
  ***
   * 
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {

	int rows = 4;
	
	for(int i=1; i<=rows; ++i) {
		
        for(int j=1; j<=rows-i; ++j) {
            cout << " ";
        }
        for(int k=1; k<=2*i-1; ++k) {
            cout << "*";
        }
        cout << endl;
        
    }
    
    for(int l=rows-1; l>=1; --l) {
    	
    	for(int m=1; m<=rows-l; ++m){
    		cout << " ";
		}
		for(int n=1; n<=2*l-1; ++n){
			cout << "*";
		}
		cout << endl;
		
	}

	getch();
}

   
   
   
