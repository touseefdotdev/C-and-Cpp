// L11c-Arrays-Example-Program-1.cpp
// Example: Take the sum of squares of 10 different numbers stored in an array.

#include <iostream>
using namespace std;

int main(){
	
	//## Taking Numbers from Users
	
	// Initializing the Array
	const int arraySize = 10 ;
	float numArray[arraySize] = {};
	
	float input;
	int i = 0;
	
	// Taking Input into the Array
	do{
		cout << "Please enter number " << "(" << i+1 << " of "<< arraySize <<") : ";
		cin >> input;
		
		numArray[i] = input;
		
		i++;
	} while(i < arraySize);
	
	// Displaying the Array
	cout << "\nYou entered following numbers: \n";
	for(int j = 0; j < arraySize; j++){
		cout << "\t" << numArray[j]	;
	}
	
	//## Calculating Sum and Displaying
	
	double sum = 0;
	
	// Calculating Sum
	for (int j = 0; j < arraySize; j++){
		sum += (numArray[j] * numArray[j]);
	}
	
	// Displaying Sum
	cout << "\n\nSum of Squares of these numbers is --> " << sum << "\n";
	
}

