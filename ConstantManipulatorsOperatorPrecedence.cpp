#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
	/* /****Constant keyword will not change any value
	const float a=10.1;
	cout<<"The vale of a was: "<<a<<endl;
	a=20.2;
	cout<<"the value of a is: "<<a<<endl; */
	
	
	/*// Manipulator **********/
	
	int a=12,b=77,c=11458;
	cout<<"The value of A without manipulator is: "<<a<<endl;
	cout<<"The value of B without manipulator is: "<<b<<endl;
	cout<<"The value of C without manipulator is: "<<c<<endl;
	cout<<endl;
	cout<<"The value of A without manipulator is: "<<setw(4)<<a<<endl;
	cout<<"The value of B without manipulator is: "<<setw(4)<<b<<endl;
	cout<<"The value of C without manipulator is: "<<setw(4)<<c<<endl;
	
	return 0;
}
