#include<iostream>
#include<string>
#include<map>
using namespace std;

int main()
{
	map<string,int>markMap;
	markMap["sagar"]=98;
	markMap["Disha"]=78;
	map<string,int>::iterator iter;
	for(iter=markMap.begin();iter!=markMap.end();iter++){
		cout<<(*iter).first<<" "<<(*iter).second<<"\n";
	}
	return 0;
}
