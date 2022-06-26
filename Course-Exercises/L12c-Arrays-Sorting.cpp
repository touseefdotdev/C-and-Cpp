// L12c-Arrays-Sorting.cpp
// Sorting with the help of Swapping

#include <iostream>
using namespace std;

int main(void){

	//Declaring and Initializing the array
	const int numListSize = 10;
	int numList[numListSize] = {};
	
	//Taking input form user into array
	cout << "Please enter numbers you want to sort : " << endl;
	for(int i = 0; i < numListSize; i++){
		cin >> numList[i];
	}
	
	//Displaying the input 
	cout << "\nYou entered these numbers: " << endl;
	for (int i = 0; i < numListSize; i++){
		cout << numList[i] << "  " ;
	}

	//Sorting the array
	for (int i = 0; i < numListSize; i++){
		for (int j = i; j < numListSize; j++){
			if (numList[i] > numList[j]){	// [c] , [b]
				int swap = numList[i];		// x = c
				numList[i] = numList[j];	// b , [b]
				numList[j] = swap;			// b ,  c
			}
		}		
	}
	//displaying the Sorted Array
	cout << "\nThe sorted array is: " << endl;
	for (int i = 0; i < numListSize; i++){
		cout << numList[i] << "  " ;
	}
}

