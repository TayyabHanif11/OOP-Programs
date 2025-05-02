#include<iostream>
#include<string>
using namespace std;
class Employee{
	private:  //Access Specifier.
		int id;  //Employee ID.
		string name;  //Employee Name.
		float salary;  //Employee Salary.
		
		public:  //Access Specifier.
			Employee(){  //Defalt Constructor.
				id = 0;
				name = "Not Assigned";
				salary = 0.0f;
			}
			
			 void displayDetails(){  //Method For Displaying Details.
				cout<<"Employee ID : "<<id<<endl;
				cout<<"Employee Name : "<<name<<endl;
				cout<<"Employee Salary : "<<salary;
			}
};