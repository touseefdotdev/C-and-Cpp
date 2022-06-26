#include <iostream>
using namespace std;

int main(void){
	
	int r1 = 10, r2 = 10, r3 = 10;
	
	
	
	if(r1 > r2){
		if(r2 > r3){
			cout << r1 <<" is maximum among " << r1 << " " << r2 << " " << r3 << "\n";
		} else if (r1 > r3){
			cout << r1 <<" is maximum among " << r1 << " " << r2 << " " << r3 << "\n";
		} else {
			cout << r3 <<" is maximum among " << r1 << " " << r2 << " " << r3 << "\n";
		}
	} else {
		if (r2 > r3){
			cout << r2 <<" is maximum among " << r1 << " " << r2 << " " << r3 << "\n";
		} else if (r1 > r3){
			cout << r2 <<" is maximum among " << r1 << " " << r2 << " " << r3 << "\n";
		} else{
			cout << r3 <<" is maximum among " << r1 << " " << r2 << " " << r3 << "\n";
		}
	}
	
}
