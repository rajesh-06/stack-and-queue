#include<iostream>
using namespace std;
//making a node
class node{
public:
	int data;
	node*next;
};
//making a stack 
class stack{
public:
	//making top
	node*top;
	stack(){
		top=NULL;
	}
//making of insert of data
void push(int value){
//making a new node and taking its data
	node *temp=new node;
	temp->data=value;
	if (top==NULL){
		top=temp;
		top->next=NULL;
	}
	else {
		temp->next=top;
		top=temp;
	}
}
void pop(){
	node *temp;
	temp=top;
	top=temp->next;
	delete temp;
}
void size(){
	node *current=top;
	int i=0;
	while(current!=NULL){
		current=current->next;
		i++;
	}
	cout<<"size of stack is "<<i<<endl;
}
void topp(){
	cout<<"the top value is "<<top->data<<endl;
}
bool isEmpty(){
	node*current=top;
	if (current==NULL){
		return true;
	}
	else{
	return false;
	}
}
		
void display(){
	node *current=top;
	while(current!=NULL){
		cout<<current->data<<"->";
		current=current->next;
	}
	cout<<endl;
}
};
int main(){
stack s;
for(int i =0; i<5; i++)
s.push(i);
	s.display();
	s.isEmpty();
	s.size();
	s.topp();
	s.pop();
	s.display();
	s.isEmpty();
	s.topp();
	s.size();
	return 0;
	}

