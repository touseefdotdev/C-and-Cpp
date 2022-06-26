// L12b-Arrays-Comparison.cpp
// To Learn About Array Comparison

#include <iostream>
using namespace std;

int main(void){
	
	//[i] Two arrays are called equal only if [1] same size [2] corresponding equal values
	
	const int size = 5;
	int numArray1[size] = {}; // sets every element to zero
	int numArray2[size] = {};
	
	// Taking input from the user
	
	cout << "Enter numbers for the first array : " << endl;
	for (int i=0; i<size; i++){
		cin >> numArray1[i];
	}
	
	cout << "Enter numbers for the second array : " << endl;
	for (int i=0; i<size; i++){
		cin >> numArray2[i];
	}

	// Displaying the arrays
	
	cout << "\n\n";
	
	cout << "First Array is : \n";
	for(int i = 0; i < size; i++){
		cout << numArray1[i] << " ";
	}

	cout << "\nSecond Array is : \n";
	for(int i = 0; i < size; i++){
		cout << numArray2[i] << " ";
	}
	
	// Comparing the Two Arrays
	
	int equals = 1; // flag
	
	for (int i = 0; i < size; i++){
		
		if(numArray1[i] != numArray2[i]){
			cout << "\n\nBoth Arrays are not Equal. :(";
			equals = 0;
			break;
		}
	}
	
	if(equals == 1) // checking flag after comparing arrays
		cout << "\n\nBoth Arrays are Equal. :)";
}

