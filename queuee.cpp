#include<iostream>
#include<queue>
using namespace std;
int main()
{
	queue<int>marks;
	for(int i=0;i<=5;i++){
		marks.push(i);
		
	}
	while(!marks.empty()){
		int x=marks.front();
		marks.pop();
		cout<<x<<" "<<endl;
	}
	return 0;
}
