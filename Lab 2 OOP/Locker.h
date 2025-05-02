#include<iostream>
#include<string>
using namespace std;
class Locker{
	public:  //Access Specifier.
	Locker(){  //Default Constructor.
		cout<<"Locker allocated to customer."<<endl;
	}
	~Locker(){  //Default Destructor.
		cout<<"Locker retured by customer."<<endl;
	}
};