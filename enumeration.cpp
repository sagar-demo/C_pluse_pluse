#include<iostream>
using namespace std;
//Declaration of enum datatype
enum week
{
	Mon,
	Tue,
	Wed,
	Thur,
	Fri,
	Sat,
	Sun	
};

int main()
{
	enum week day;
	day=Fri;
	cout<<day;	
	return 0;
}
