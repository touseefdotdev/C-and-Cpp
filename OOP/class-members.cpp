#include <iostream>
using namespace std;

class Student{
	private:
		char* name; // OR default values // char* name = "XYZ";
		int age;	// OR default values // int age = 18;
		const int random1; // let value = age-1
		const int random2; // let value = age-2
		// Q: how to initialize const-data-members? as soon they come into life, they cannot be assigned value
		// A: using Initializer-List, given after closing parenthesis of parameter list of constructor
		//	  they are initialized in order-of-declaration in the class
		static int noOfStudents; 
		// static members are class members; not part of any object of that class; shared by all instances (objects) of the class
		// can be accessed using (.) operator OR (::) scope resolution operator
	public:
		//----Explicit Default Constructor i.e parameterless OR parameterized having default values
		Student(char* nm = "XYZ", int ag = 18) : random2(ag-2), random1(ag-1){
			// using deep copy (new operator uses dynamic memory allocation)
			this->name = new char[strlen(nm)+1];
			strcpy(this->name, nm);
			
			this->age = 18;
			
			this->noOfStudents++; // static member
			cout << "_____Constructor for [" << this->name << "] called" << endl;

		}
		
		//----Copy Constructor
		Student(const Student& obj) : random2(obj.age-2), random1(obj.age-1){
			// using deep copy (new operator uses dynamic memory allocation)
			this->name = new char[strlen(obj.name)+1];
			strcpy(this->name, obj.name);
			
			this->age = obj.age;
			
			this->noOfStudents++; // static member
			cout << "_____Copy Constructor for [" << this->name << "] called" << endl;
		}
		
		//----Destructor
		~Student(){
			cout << "~~~~Destructor for [" << this->name << "] called" << endl;
			if(name){
				delete []name;
			}
			this->noOfStudents--; // static member
		}
		
		//----instance-methods
		void setName(char* nm){
			if (nm){
				this->name = new char[strlen(nm)+1];
				strcpy(this->name, nm);
			} else{
				cout << "Name cannot be empty, try again." << endl;
			}
		}
		void setAge(int ag){
			if (ag){
				this->age = ag;
			} else{
				cout << "Age cannot be empty, try again." << endl;
			}
		}
		
		// ERROR__cannot change value of const data
		//void setRandom1(int n){
		//	this->random1 = n;
		//}
			
		//----const-methods
		// -> for functions to show/access data (read only access) i.e. display data or will return the value of data members
		// -> Const-member function cannot change data member (state)
		// -> Cannot call non-const functions in const functions because non-const member functions
		//    may have code for changing state of the object that is not allowed in the const-functions.
		// -> Const Objects can only access const-methods;
		//    Make all functions that don’t change the state of the object constant
		//    This will enable constant objects to access more member functions
		
		char* getName() const{
			return this->name;
		}
		int getAge() const{
			return this->age;
		}
		
		int getRandom1() const{
			return this->random1;
		}
		
		int getRandom2() const{
			return this->random2;
		}
		
		
		//----Static-methods (Class-methods)
		// They are used to access static data members
		// They cannot access any non-static members
		// can be accessed the same way as static-data-member i.e. (.) operator && (::) operator
		// 'this' pointer is not passed to static member functions 
		// because static member functions cannot access non static data members
		
		static int getNoOfStudents(){
			return noOfStudents;
		}
		
		
		Student getReference(){
			return *this;
			
			// (this) is a pointer to object
			// so you can use [this->members]
			// dereferencing it (*this) would give us the object
			// so you can use [(*this).members]
			
			// each instance-method of class accepts 'this' as a parameter implicityly
			// so that it knows on which object to operate on
			// [Student * const this;]
			
			// each constant-method of the class accepts 'this' as (const pointer to const data) as a parameter implicityly
			// so that it know from which object to read from
			// [const Student *const this;]
			
			// each class-method of the class don't accept 'this' as a parameter, because it does not operate on instances(objects)
			
			// each static-method of the class don't accept 'this' as a parameter, because it does not operate on instances(objects)
		}

};

int Student::noOfStudents = 0; // private-static-member cannot be accessed outside the class except for initialization
// Static data members should be initialized once at file scope
// They are initialized at the time of definition
// If static data members are not explicitly initialized at the time of definition then they are initialized to 0
// [ int Student::noOfStudents; ] == [ int Student::noOfStudents=0; ]

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
	
	//s4.getReference().setAge(30); // not working ... no idea
	s4.setAge(30);
	cout << "Age of [" << s4.getName() << "] is " << "updated to 30" << endl;
	cout << "Age of [" << s4.getName() << "] is " << s4.getAge() << endl;
	
	//---- accessing const members
	cout << "const data 1 of [" << s4.getName() << " , " << s4.getAge() << "] is " << s4.getRandom1() << endl;		
	cout << "const data 2 of [" << s4.getName() << " , " << s4.getAge() << "] is " << s4.getRandom2() << endl;	
	
	// creating const object
	const Student s5 = Student("Aslam", 35); // Constant objects cannot change their state
	// s5.setAge(22); // ERROR__const object can only access const members. Like get methods below
	cout << "const object [" << s5.getName() << " , " << s5.getAge() << "] is " << "created" << endl;
	
	// accessing static info
	//cout << "static data [" << "No. Of Students" << "] is " << Student.getNoOfStudents() << endl;
	cout << "static data [" << "No. Of Students" << "] is " << Student::getNoOfStudents() << endl;
	
	
	cout << "\n\n\n\n" << endl;
	
	
		
    return 0;
}