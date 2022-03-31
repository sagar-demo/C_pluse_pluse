#include<iostream>
using namespace std;

class person
{
	//Data member of person
	public:
	person(int x)
	{
		cout<<"Person::person(int) called "<<endl;
		}	
};
class faculty:public person
{
	//Data member of person
	public:
	faculty(int x):person(x)
	{
		cout<<"Faculty::Faculty(int ) called "<<endl;
		}	
};
class student:public person
{
	public:
	student(int x):person(x)
	{
		cout<<"Student::student(int )called "<<endl;
		}	
};
class ta:public faculty,public student
{
	public:
	ta(int x):student(x),faculty(x)
	{
		cout<<"TA::TA (int) called "<<endl;
		}	
};
int main()
{
	ta ta1(30);
	return 0;
}
