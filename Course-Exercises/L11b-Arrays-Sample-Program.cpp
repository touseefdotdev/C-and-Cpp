// L11b-Arrays-Sample-Program.cpp
// Sample Problem: 
// Write a program which reads positive integers from the user and
// stores these ones in an array. User can enter a maximum of 100
// numbers. Stop taking input when user enters -1.


#include <iostream> 
using namespace std;

int main(){
	
	//## Take Positive Integer from User
	int input, num[100];
	
	// Loop to Take Input	
	int i = 0;
	
	do {
		// Taking input from user
		cout << "["<< i+1 <<"] Enter Number (Type -1 to end) : ";
		cin >> input; 
		
		// Storing Input in Array
		if (input != -1){
			num[i] = input; 
		}
		
		//Loop Variable
		i++;
		
		// Loop Conditions, if any FALSE, loop ends
	} while(i < 100 && input != -1);
	
	
	//## Displaying Output to User
	cout << "\nYou entered these "<< i-1 <<" numbers: \n";
	for (int j = 0; j < i-1; j++){ // i-1 because we increament i by 1 before exiting the loop
		
		// Displaying Numbers
		cout << "\t " << num[j] ; 
		
		// Breaking Line after 10 iterations
		if ((j+1) % 10 == 0) { 
			cout << "\n";
		} 
	}
	

}

