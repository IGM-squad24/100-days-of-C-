#include<iostream>
using namespace std;
class Stack{
	private :
struct Node{
	int data;
	Node * next;
	
}*top;
//int capacity;
//int *arr;
public :
Stack(){
//	capacity=c;
//	arr=new int [c];
	top=NULL;
}
 ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }
bool isEmpty(){
	return top==NULL;
}
//bool isFull(){
//	if(top==capacity-1)
//	return true;
//	}
//	

void push(int value){
//	if(isFull()){
//		cout<<"over flow "<<endl;
//		return;
//	} 
Node *newnode=new Node();
	newnode ->data =value;
	newnode->next=top;
	top=newnode;
	cout<<"pushing ' "<<value<<" '"<<endl;
}
bool pop(){
	
	if(isEmpty()){
		cout<<"stack underflow "<<endl;
		return false;
	} 
	Node *temp=top;
int 	num=top->data;
	top=top->next;
	cout<<"poping : "<<num<<endl;
	delete temp;
	true;
}

};
int main(){
 Stack stack;
    stack.push(5);
    stack.push(10);
    stack.pop();
    stack.pop();
    stack.pop(); 
	return 0;
}
