#include<iostream>
using namespace std;

class parent1
{
	public:
	//first base class constructor
	parent1()
	{
		cout<<"Inside first base class: "<<endl;
		}	
};
//second base class 
class parent2{
	public:
		//second base classs constructor
		parent2()
		{
			cout<<"Inside second base class constructor called: "<<endl;
		}	
};
//child class inheriting parent1,parent2
class child:public parent2,parent1{
	public:
		//child class constructor called
		child()
		{
			cout<<"Inside child class constructor called: "<<endl;
		}
};
//int main function
int main()
{
	child c1;
	return 0;
}
