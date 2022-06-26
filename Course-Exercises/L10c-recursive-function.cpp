// L10c-recursive-function.cpp
// To demonstrate the recursive function

#include <iostream>
using namespace std;


// Recursive Function to Calculate Factorial of a Number
int recursiveFact (int x){
	if (x <= 1 ) return 1;
	
	return x * recursiveFact (x-1);
}

int main(){
	
	char input = 'N';
		
	do {
	
	// Taking Number from user	
	cout << "Enter Number to find its fictorial : ";
	int num, fictorial = 1;
	cin >> num;
	
	// Calculating Factorial
	for( int i = 1; i <= num; ++i ){
		fictorial *= i;
	}
	
		
	cout << "The Fictorial of " << num << " is equal to " << fictorial << " (Using Loop)\n";
	
	
	cout << "The Fictorial of " << num << " is equal to " << recursiveFact (num) << "  (Recursively)\n";
	
	
	
	// Taking input from User
	cout << "\nCalculate another Factorial ? ('Y' to continue) : ";
	cin >> input;
	
	} while (input == 'y' || input == 'Y');
	
}


