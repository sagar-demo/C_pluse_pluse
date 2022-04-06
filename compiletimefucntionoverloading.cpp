#include<iostream>
using namespace std;
class Base
{
	public:
		//fucntion with one parameters
		void func(int x)
		{
			cout<<"value of x is: "<<x<<endl;
		}
		//fucntion with same name but double parameters
		void func(double x)
		{
			cout<<"value of x is:"<<x<<endl;
		}
		//function with same but two int parameters
		void func(int x,int y)
		{
			cout<<"The value of x and y is:"<<x<<","<<y<<endl;
		}
};

int main()
{
	Base obj1;
	//First func is called
	obj1.func(100);
	//Second func is called
	obj1.func(1.5);
	//The Third func is called
	obj1.func(5,6);
	return 0;
}
