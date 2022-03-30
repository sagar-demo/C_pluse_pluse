#include<iostream>
using namespace std;

class base
{
	public:
	int x;
	void getdata()
	{
		cout<<"Enter the value of x	= ";cin>>x;
		}	
};
class derived:public base //single derived class
{
	private:
		int y;
	public:
		void readdata()
		{
			cout<<"Enter the value of y = ";cin>>y;
			
		}
		void product()
		{
			cout<<"product = "<<x*y;
		}
};
int main()
{
	derived a;
	a.getdata();
	a.readdata();
	a.product();
	return 0;
}
