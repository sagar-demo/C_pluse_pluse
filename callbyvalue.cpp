//#include<iostream>
//using namespace std;
////Call by reference using pointers
//void swap(int *a, int *b)
//{
//	int temp=*a;                                                                             a;
//	*a=*b;
//	*b=temp;
//}
//
//int main()
//{
//    int x=14,y=10;
//    cout<<"The value of x is "<<x<<" And the value of y is "<<y<<endl;
//    swap(&x,&y);
//    cout<<"The value of x is "<<x<<" And the value of y is "<<y<<endl;
//	return 0;
//}

#include<iostream>
using namespace std;

int main()
{
	int a=18,b=78;
	cout<<"Before swap a= "<<a<<" b="<<b<<endl;
	a=a*b;
	b=a/b;
	a=a/b;
	cout<<"After swap a= "<<a<<" b="<<b<<endl;
	return 0;
}
