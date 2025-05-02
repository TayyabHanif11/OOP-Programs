#include<iostream>
using namespace std;
class Voter {
	string name;
	int age;
	public:
	bool isEligible();
	void getdata();
}; 
bool Voter::isEligible() {
	return age>18;
	}
	void Voter::getdata() {
	cout << "Enter name: ";
	cin >> name;
	cout << "Enter age: ";
	cin >> age;
		}
int main() {
	Voter v;
	v.getdata();
		if(v.isEligible()) {
			cout << "\nYou are eligible to vote.";
		} else {
			cout << "\nNot eligible to vote.";
		}
}
