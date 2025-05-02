#include<iostream>
#include<string>
using namespace std;
class Rectangle{
	private:  //Access Specifier.
	float length;  //Rectangle Length.
	float width;  //Rectangle Width.
	
	public:  //Access Specifier.
		Rectangle(){  //Default Constructor.
			length = 1.0f;  //Default Length.
			width = 1.0f;  //Default Width.
		}
		
		Rectangle(float l,float w){  //Parameterized Constructor.
			length = l;
			width = w;
		}
		
		Rectangle(float side){  //Parameterized Constructor.
			length = side;
			width = side;
		}
		
		int area(){  //Method For Area.
		 return length * width;
			
		}
		
		 void display(){  //Method For Displaying Area.
		    cout<<"Length is : "<<length<<endl;
		    cout<<"Width is : "<<width<<endl;
			cout<<"Area is : "<<area()<<endl;
		}
};