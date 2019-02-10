#include<iostream>
using namespace std;
class queueARR{
    public:
    int arr[1000];
    int * head;
    int *tail;
    queueARR(){head=NULL;tail=NULL;}
    bool isEmpty(){
            if(head==NULL){
                return true;
            }
            else return false;
    }
    void enqueue(int value){
                if(head ==NULL){
                    head=arr;
                    tail=arr;
                    *head=value;
                }
                else{
                    tail++;
                    *tail=value;
                }
        }
    void display(){
        int * temp=head;
	while(temp!=tail){
	cout<<*temp<<"->";
	temp++;
	}
	cout<<*temp;
	cout<<endl;
                }
    }
    void dequeue(){
        if(head==NULL)cout<<"nothing to delete"<<endl;
        else if(head==tail){cout<<"you are deleting last element"<<endl;head=NULL;}
        else head++;
    }

};
int main(){
queueARR q1;
for(int i=1;i<5;i++)
q1.enqueue(i);
q1.display();
q1.dequeue();
q1.display();
q1.dequeue();
q1.display();
q1.enqueue(23);
q1.enqueue(34);
q1.display();
q1.dequeue();
q1.dequeue();
q1.display();
return 0;
}
