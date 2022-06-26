// l12a-Character-Arrays.cpp
// Basics of Character Arrays

#include <iostream>
#include <cstring> // for strlen() function
using namespace std;

int main() {

	//## Declaration
	// Number Arrays
	int numList[10] = {}; // length = 10 -- all elements = 0
	int numList2[] = {}; // length = 0 -- all elements = 0
	
	// Character Arrays "Strings"
	char name[100]; // length = 100
	char fName[10] = {'a', 'l', 'i'};
	char fName2[] = {'a', 'l', 'i'};
	char lName[10] = "imran";
	char lName2[] = "imran";
	
	//## Taking Input into Arrays
	cout << "\n** Taking Input into Array\n" << endl;
	// Number Arrays
	cout << "Please Enter Numbers for the number array: " << endl;
	for( int i = 0; i < 5; i++){
		cout << "[" << i+1 << "] Enter Number: "; 
		cin >> numList[i];
	}
	// Character Arrays
	cout << "Please Enter Characters for the character array: [string]: " ;
	cin >> name;
	
	//## Displaying Arrays
	cout << "\n** Displaying the Array\n" << endl;
	// Number Arrays
	cout << "Number array: " ; 
	for(int i=0; i < 10; i++){
		cout << numList[i] << " " ;
	}
	// Size and Length of Number Array
	cout << "\n\tSize [bytes] of above array int numList[10] is " << sizeof(numList) << "\n";
	cout << "\tLength of above array int numList[10] is " << sizeof(numList) / sizeof(numList[0]) << endl;
	//cout << "\tLength of above array int numList[10] is " << strlen(numList) << endl; //"strlen"only for strings
	
	// Character Arrays
	cout << "\n\n";
	cout << "Character array: " << name << "\n";
	// Size and Length of Character Array
	cout << "\tSize [bytes] of above array char name[100] is " << sizeof(name) << "\n";
	int length = 0;
	for (int i = 0; i < 100; i++){
		++length;
		if (name[i] == '\0'){
			break;
		}
	}
	cout << "\tLength of above array char name[100] is " << length << endl;
	cout << "\tLength of above array char name[100] is " << strlen(name) << endl; // does not count \0 (null) character
}

