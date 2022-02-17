//Global variable & local variable
#include<iostream>
using namespace std;
int glo=5;
void sum()
{
	cout<<"Global variable:"<<glo<<"\n";
}



int main()
{
	int glo=8;
	glo=9;
	sum();
	cout<<"Local variable: "<<glo;
	return 0;
}


//#include<iostream>
//#include<stdio.h>
//using namespace std;
//
//int main()
//{
//   char *a="sagar";
//   cout<<"Your name is: "<<a;
//
//    return 0;
//}
