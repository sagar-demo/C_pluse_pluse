#include<iostream>
#include<cmath>
using namespace std;
class simplecalculator
{
	protected:
	int a,b;
	public:
	void set1(int n1,int n2)
	{
		a=n1;
		b=n2;
	}
	void display1()
	{
		cout<<"The sum of two numbers is "<<a+b<<endl;
		cout<<"The subtraction of two number is "<<a-b<<endl;
		cout<<"The multiplication of two number is "<<a*b<<endl;
		cout<<"The divison of two number is "<<a/b<<endl;
	}
	
};
class scientificCalculator
{
	protected:
	int a,b;
	public:
	void set2(int no1,int no2)
	{
		a=no1;
		b=no2;	
	}
	void display2()
	{
		cout<<"The sine of two number are "<<sin(a)<<" "<<sin(b)<<endl;
		cout<<"The cosine of two number are "<<cos(a)<<" "<<cos(b)<<endl;
		cout<<"The tan of two number are "<<tan(a)<<" "<<tan(b)<<endl;
		cout<<"The logarithms of two numbers are "<<log(a)<<" "<<log(b)<<endl;
	}	
};
class HybridCalculator:public simplecalculator,public scientificCalculator
{
	public:
		void show()
		{
			display1();
			display2();
			cout<<"The calculations are done! "<<endl;
		}
};
int main()
{
	HybridCalculator h;
	int num1,num2;
	cout<<"Enter two numbers "<<endl;
	cin>>num1>>num2;
	h.set1(num1,num2);
	h.set2(num1,num2);
	h.show();
	return 0;
}  
