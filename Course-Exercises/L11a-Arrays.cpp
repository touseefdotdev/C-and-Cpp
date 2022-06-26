// L11a-Arrays.cpp
// Introduction to Arrays

#include <iostream>
using namespace std;

int main(){

	cout << "\nWelcome to Introduction to Arrays\n\n";
	
	
	// To declare Array: data_type + name + size
	int scoreList[10] = {1,2,3,4,5,6,7,8,9,10};
	
	// or int scoreList[] = {1,2,3,4,5,6,7,8,9,10};
	
	// or take input from user
	
	for (int i = 0; i < 10; i++){
		cout << "Enter Number " << "(" << i+1 << "/10) : ";
		cin >> scoreList[i];
	}
	
	cout << "\nYou Entered following Numbers: \n";
	for ( int i = 0; i < 10; i++){
		cout << "[" << i << "]" << "  ------>  " << scoreList[i] << "\n";
	}

}

