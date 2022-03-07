#include<iostream>
#include<string>
using namespace std;

class student
{
	public:
		int student_id;
		string student_name;
		int student_age;
	void read_studentInfo(); //Declaration of fucntion
	void print_studentInfo()
	{
		cout<<"\n Student ID: "<<student_id<<endl;
		cout<<"Student Name: "<<student_name<<endl;
		cout<<"Student Age: "<<student_age<<endl;	
	}
};
void student::read_studentInfo()
{
	cout<<"\nEnter student id:";
	cin>>student_id;
	cout<<"\nEnter Student_name: ";
	cin>>student_name;
	cout<<"\nEnter Student Age: ";
	cin>>student_age;
}
int main()
{
	student stud;
	stud.read_studentInfo();
	stud.print_studentInfo();
	return 0;
}
