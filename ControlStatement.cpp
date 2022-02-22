#include<iostream>
using namespace std;

int main()
{
	cout<<"Enter your current Age: ";
	int a;
	cin>>a;
	cout<<"Your Current Age is: "<<a<<endl;
	if((a<18) && (a>0) )
	{
		cout<<"you are not eligible for vote: "<<a<<endl;
	}
	else if(a==18)
	{
		cout<<"you have across 18 years age just now so pls vote: "<<a<<endl;
	}
	else if(a<1)
	{
		cout<<"sorry we can't give vote: "<<a<<endl;
	}
	else
	{
		cout<<"you are eligible for vote: ";
	}
	return 0;
	
}
