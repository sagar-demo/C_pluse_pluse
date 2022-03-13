#include<iostream>
using namespace std;

class employee
{
	int id;
	int salary;
	public:
		void setId(void)
		{
			salary=12000;
			cout<<"Enter the id of employee "<<endl;
			cin>>id;
		}
		void getId(void)
		{
			cout<<"The id of this employee is "<<id<<endl;
		}

};
//Array of objects & passing objects as function

int main()
{
	employee tcs[5];
	for (int i=0;i<5;i++)
	{
	tcs[i].setId();
	tcs[i].getId();	

	}
	return 0;
}
