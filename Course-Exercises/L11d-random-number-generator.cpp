// L11d-random-number-generator.cpp
// To demostrate the random number generator function in C/C++

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

	char input = 'Y';
	do{
		int randNum = rand(); // generate random between 0 and 32767
		cout << (randNum % 6) + 1 << "\n\n"; // to limit between 1 and 6
		
		cout << "Need another random number ? (Y/N) ";
		cin >> input;
		
	} while (input == 'y' || input == 'Y');

}

