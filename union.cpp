#include<iostream>
using namespace std;
//Declaration of union is same as the structures
union test
{
	int x,y;
};
int main()
{
	union test t;
	t.x=5;
	cout << "After making x = 5:"
         << endl
         << "x = " << t.x
         << ", y = " << t.y
         << endl;
	// t.x is also updated to 10
	    t.y = 10;
  
    cout << "After making Y = 10:"
         << endl
         << "x = " << t.x
         << ", y = " << t.y
         << endl;

	
	return 0;
}
