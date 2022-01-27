/* built in datatype
(built in)-int,flot,char,double,bool
User-defined datatype
1-Struct
2-union
3-Enum
Derived datatype
1-Array
2-pointer
3-Function */

#include<iostream>
using namespace std;
int glo=1000; //Global variable
void sum()
{
	int u; // local variable of this function
	cout<<glo;
}

int main()
{
	int glo=8;
	glo=10;
	bool is_false=false;
	cout<<	is_false;
//	int a=700,b=89;
//	float z=1.1,x=2.2;
//	char s='s',k='k';
//	
//	cout<<"Value of numeric A is: "<<a<<"\nValue of Numeric B: "<< b<<"\n";
//	cout<<"Value of float Z is: "<<z<<"\nValue of float x is: "<< x<<"\n";
//	cout<<"Value of string s is: "<<s<<"\nValue of string k is: "<< k<<"\n";
//	sum();
	cout<<glo;
	return 0;
}
