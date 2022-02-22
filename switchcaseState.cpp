#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter you age: "<<endl;
	cin>>age;
	
	switch(age)
	{
		case 18:
			cout<<"your age is: "<<age<<endl;
			break;
		case 22:
			cout<<"you are "<<age<<endl;
			break;
		case 1:
			cout<<"You are "<<age<<endl;
			break;
		default:
			cout<<"no special cases"<<endl;
			break;
	}
	return 0;
}
