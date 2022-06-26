// L10a-header-file.cpp
// To create custom header file

#include <iostream>
#include "L10a-custom-header.h"
using namespace std;

int main(){
	
	float num1, num2;
	
	cout << "Enter number (1 of 2):";
	cin >> num1;
	cout << "Enter number (2 of 2):";
	cin >> num2;
	
	cout << "The sum of " << num1 << " and " << num2 << " is equal to " << sum( num1 , num2 ) << "\n" ;
	cout << "Value of pi = " << pi << "\n";
}

//float sum( float a , float b ){
//	return a + b;
//}

