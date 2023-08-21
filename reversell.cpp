//Reverse 
#include <bits/stdc++.h>
using namespace std;
class Node{
	public:
	int val;
	Node *next;
	Node(int data){
		val=data;
		next=NULL;
	}
};

//reverse
void reverse(Node*head){
	if(head==NULL) return;
	reverse(head->next);
    cout<<head->val<<endl;
}
int main(){
	int headval,total;
	cout<<"Enter total elements:";
	cin>>total;
	cout<<"Enter the head value:";
	cin>>headval;
	Node *head=new Node(headval);
	Node *current=head;
	for(int i=1;i<total;i++){
		int val;
		cout<<"Enter the value:";
		cin>>val;
		current->next=new Node(val);
		current=current->next;
	}
	reverse(head);
	return 0;
}

