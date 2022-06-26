// L12e-Arrays-Searching-Binary.cpp
// To implement Binary Searching Algorithm

#include <iostream>
using namespace std;

int main(void){

	// Filling the Array with Random Values
		const int numListSize = 100;
		int numList[numListSize] = {};
		for (int i = 0; i < numListSize; i++){
			numList[i] = (rand() % 100) + 1;
		}

	
	// Sorting the Array [Swapping Method] - Binary Searching Only applies to sorted arrays
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
//	cout << "\nThe sorted array is: " << endl;
//	for (int i = 0; i < numListSize; i++){
//		cout << numList[i] << "  " ;
//	}

	int input = 0;
		
	do{
					
		// Taking input
		cout << "\nEnter a number [1-100] to search (-1 to end) : ";
		cin >> input;
		
		// Linear Search
		int sFlag = 0;
		int counter = 0;
		for (int i = 0; i < numListSize; i++){
		
			if (input == numList[i]){
				cout << "\t["<< ++counter << "] FOUND! ";
				cout << "----- Location => " << i+1 << endl;
				sFlag = 1;
			}
		}
				
		if(sFlag == 0){
			cout << "\tOps, not found! Try again.\n\n" << endl;
		} else{
			cout << "\n\n" << endl;
		}
	} while (input != -1);
	
}
