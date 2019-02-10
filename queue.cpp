#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node*next;
	node()
	{
	next=NULL;
	}
};
class queue{
	public:
	node *head;
	node*tail;
	queue(){
		head=NULL;
		tail=NULL;
	}
void push(int value){
	node*temp=new node;
	temp->data=value;
	if (head==NULL){
		head=temp;
	}
	else{
		tail->next=temp;
	}
	tail=temp;
}
void pop(){
	node*temp;
	temp=head;
	head=temp->next;
	delete temp;
}
bool isEmpty(){
	if (head==NULL){
		return 1;
	}
	else{
		return 0;
	}
}
void size(){
	node *curr=head;
	int i=0;
	while(curr!=NULL){
		curr=curr->next;
		i++;
	}
	cout<<"the size of it "<<i<<endl;
}
void display(){
	node*curr=head;
	while(curr!=NULL){
		cout<<curr->data<<"->";
	curr=curr->next;
	}
	cout<<endl;
}
};
int main(){
queue q;
for(int i =1; i<5; i++)
q.push(i);
q.display();
q.isEmpty();
q.size();
q.pop();
q.display();
q.isEmpty();
q.size();

return 0;
}
