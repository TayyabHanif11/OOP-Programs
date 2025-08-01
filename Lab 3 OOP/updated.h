#include <iostream>
using namespace std;

class Bankaccount {
private:
    double* balance;  // Pointer to dynamically allocate memory for balance

public:
    // Constructor: Dynamically allocates memory for the balance
    Bankaccount(double amount) {
        balance = new double(amount);
        cout << "BankAccount created with balance: " << *balance << endl;
    }

    // Deep Copy Constructor: Allocates new memory for copied object
    Bankaccount(const Bankaccount& other) {
        balance = new double(*other.balance);  // Creates a new copy
        cout << "Deep copy constructor called!" << endl;
    }

    // Function to update the balance
    void setBalance(double new_balance) {
        *balance = new_balance;
    }

    // Function to display the balance
    void display() const {
        cout << "Balance: " << *balance << endl;
    }

    // Destructor: Properly deallocates memory
    ~Bankaccount() {
        cout << "Deleting balance: " << *balance << endl;
        delete balance;
    }
};



