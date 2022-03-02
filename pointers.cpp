#include<iostream>
using namespace std;
int main()
{
	int a=5;
	//pointer is datatype which holds the address of other datatype
	//&--(address of) operator
	int *b=&a;
	cout<<"The address of a is:"<<&a<<endl;
	cout<<"The address of b is:"<<b<<endl;
	
	// *--(value at) Deference operators
	cout<<"The value at address b is "<<*b<<endl;
	
	//Pointer to pointer 
	int **c=&b;
	cout<<"The address of b is "<<&b<<endl;
	cout<<"The address of b is "<<c<<endl;
	cout<<"The value at address c is "<<**c<<endl;

	return 0;
}
