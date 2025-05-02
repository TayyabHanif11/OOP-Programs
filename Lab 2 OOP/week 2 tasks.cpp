#include<iostream>
#include<string>
#include"Employee.h"
#include"BankAccount.h"
#include"Rectangle.h"
#include"Locker.h"
using namespace std;
int main(){
	//Task 1:Default Constructor.
	/*Employee E;  //Object Of Class
	E.displayDetails();*/
	
	//Task 2:Parameterized Constructor.
	BankAccount B("PK07664535428975","Tayyab Hanif",8000);  //Object Of Class With Initialization.
	B.showAccountDetails();
	
	//Task 3:Constructor Overloading.
//	Rectangle R(5.0f);  //Object Of Class With Initialization.
//	R.display();
	
	//Task 4:Destructor.
	/*Locker oneLocker;  //Object Of Class.
	Locker* ptr = new Locker();  
	delete ptr;*/  //Destructor Called Manaully.
}
