#include<iostream>
using namespace std;
class stackArr{
	public:
	int arr[100];
	int *top;
	//default constructor
	stackArr(){
		top=NULL;	
	}
	//push, pop, size, isEmpty
	void push(int value){
		if(top==NULL){
			arr[0] = value;
			top=arr;
		}
		else{
			top++;
			*top=value;
		}
	} 
	void pop(){
		if(top==NULL)cout<<"no data to pop"<<endl;
		else{
			top--;
		}
	}
	bool isEmpty(){
        if(top == NULL) 
			return true;
		else
        	return false;
    }
	//display
	void display(){
		int *temp;
		
		if(top==NULL)cout<<"no data to display"<<endl;
		else{
			temp=arr;
			while(temp!=top){
				cout<<*temp<<"->";
				temp++;
			}
		cout<<*temp<<endl;
		}
	}
	//size
	int size(){
		int counter=0;
		if(top==NULL)return 0;
		else{
		   int *temp=arr;
			while(temp!=top){counter++;temp++;}
	    	return counter+1;
			}	
	}
};
int main(){
	stackArr a1;
	for(int i=0; i<5; i++){
	a1.push(i);}
	a1.display();
	a1.pop();
	a1.display();
	cout<<a1.size();

return 0;
}
