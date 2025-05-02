#include<iostream>
#include"calculator.h"
using namespace std;

float Calculator::add() {
	return num1+num2;
}
float Calculator::subtract() {
	return num1-num2;
}
float Calculator::multiply() {
	return num1*num2;
}
float Calculator::divide() {
	return num1/num2;
}

int main() {
	Calculator cal;
	char op;
	cout <<  "Enter two numbers: ";
	cin >> cal.num1 >> cal.num2;
	cout << "\nEnter an operation to perform (+,-,* or /): ";
	cin >> op;
	switch(op) {
		case '+':
			cout << "Sum: " << cal.add();
			break;
			case '-':
				cout << "Difference: " << cal.subtract();
				break;
				case '*':
					cout << "Multiply: " << cal.multiply();
					break;
					case '/':
						if(cal.num2==0) {
							cout << "Invalid as denominator is zero";
						} else {
						cout << "Divide: " << cal.divide();
						break;
					}
	}
	return 0;
}
