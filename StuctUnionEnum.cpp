#include<iostream>
using namespace std;
//strucutre in c++
typedef struct employee
{
	//data
	int emid;
	string company;
	float salary;
} emp;

int main()
{
	emp sagar;
	sagar.emid=5789;
	sagar.company="Tcs";
	sagar.salary=12300;
	
	cout<<"The employee id is: "<<sagar.emid<<endl;
	cout<<"The company name is: "<<sagar.company<<endl;
	cout<<"salary is "<<sagar.salary<<endl;
	return 0;
}
