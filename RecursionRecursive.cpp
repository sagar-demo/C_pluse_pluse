#include<iostream>
using namespace std;

int fib(int n)
{
	if (n<2)
	{
		return 1;
	}
	else
	{
		return fib(n-2)+fib(n-1);
	}
}

//int fact(int n)
//{
//	if(n<=1)
//	{
//		return 1;
//	}
//	return n*fact(n-1);
//}

int main()
{
	int a;
	cout<<"Enter the number "<<endl;
	cin>>a;
	cout<<"Fibbonacci series of number is "<<fib(a)<<endl;
}
