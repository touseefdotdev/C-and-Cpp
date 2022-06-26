#include <iostream>
using namespace std;

double squareByValue(double); // call by value
void squareByRef(double *); // call by reference

int main(void){
	
	//Getting Value from the User
	double num;
	cout << "Please insert a number:";
	cin >> num;
	cout << "\nYou entered => " << num << "\n";
	
	//Call By Value
	cout << "\nSquare BY VALUE function gives " << squareByValue(num) << "\n";
	cout << "After function, value stored is => " << num << "\n";
	
	//Call By Refrence
	squareByRef(&num);
	cout << "\nSquare BY REFERENCE function gives " << num << "\n";
	cout << "After function, value stored is => " << num << "\n";

}

double squareByValue(double x){
	return x * x;
}

void squareByRef(double *x){
	*x = *x * *x;
}
