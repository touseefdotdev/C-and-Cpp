#include <iostream>
using namespace std;

class Student{
	private:
		char* name;
		int age;
	public:
		//----Explicit Default Constructor i.e parameterless OR parameterized having default values
		Student(char* nm = "XYZ", int ag = 18){
			// using deep copy (new operator uses dynamic memory allocation)
			this->name = new char[strlen(nm)+1];
			strcpy(this->name, nm);
			
			this->age = 18;
			
			cout << "_____Constructor for [" << this->name << "] called" << endl;

		}
		
		//----Copy Constructor
		Student(const Student& obj){
			// using deep copy (new operator uses dynamic memory allocation)
			this->name = new char[strlen(obj.name)+1];
			strcpy(this->name, obj.name);
			
			this->age = obj.age;
			
			cout << "_____Copy Constructor for [" << this->name << "] called" << endl;
		}
		
		//----Destructor
		~Student(){
			cout << "~~~~Destructor for [" << this->name << "] called" << endl;
			if(name){
				delete []name;
			}
		}
		
		char* getName(){
			return name;
		}
		
		Student getReference(){
			// reference to current object
			return *this;
		}

};

int main(int argc, char* argv[]){

    cout << "#############################" << endl;
    cout << "###-Class and Its Members-###" << endl;
    cout << "#############################" << endl;
    
    //----using constructor
    Student s0; // OR // Student s0 = Student();
    Student s1("Touseef", 24);
    Student s2("Zeeshan", 23);
    
	//----using copy constructor
	Student s3 = s1;
	Student s4 = s2.getReference();
		
    return 0;
}