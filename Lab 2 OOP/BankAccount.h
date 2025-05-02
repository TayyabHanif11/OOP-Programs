#include<iostream>
#include<string>
using namespace std;
class BankAccount{
	private:  //Access Specifier.
		string accountNumber;  //User`s Account Number.
		string accountHolder;  //User`s Account Name.
		double balance;  //user`s Account Balance.
		
		public:  //Access Specifier.
			BankAccount(string n,string h,double b){  //Parameterized Constructor
			if(!n.empty() && !h.empty() && b>0){  //Validation.
				accountNumber = n;
				accountHolder = h;
				balance = b;
			}else{
				cout<<"Invalid Input."<<endl;
			}
			}
			
			 void showAccountDetails(){  //Method For Displaying Details.
				cout<<"Account Number : "<<accountNumber<<endl;
				cout<<"Account Holder : "<<accountHolder<<endl;
				cout<<"Account Balance : "<<balance<<endl;
			}
};