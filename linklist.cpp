#include<iostream>
using namespace std;
//Structure of node
class Node{
	public:
		int data;
		Node* next;
};
//Function to print the content of linked list starting from the given node
void printlist(Node* n){
	//Iterate till reaches Null
	while(n!=NULL){
		//print the data
		cout<<n->data<<" ";
		n=n->next;
	}
}
//Drive code
int main(){
	Node* head=NULL;
	Node* second=NULL;
	Node* third=NULL;
	//allocate 3 node in the heap
	head=new Node();
	second=new Node();
	third=new Node();
	//Assign data in the first node
	head->data=1;
	//link first node with second
	head->next=second;
	//Assing data to second node
	second->data=2;
	second->next=third;
	//Assign data to third node
	third->data=3;
	third->next=NULL;
	printlist(head);
	
	return 0;
	
}

