#include<iostream>
using namespace std;
class Stack{
	int capacity;
	int * arr;
	int top_idx;
	public :
	Stack(int c){
		this ->capacity=c;
		arr= new int [c];
		this->top_idx=-1;
		
	} 
	void push(int x){
		if(top_idx==capacity){
			cout<<" stack overflow "<<endl;
			return;
		}
		this->top_idx++;
		this->arr[this->top_idx]=x;
		cout<<x<<endl;
	}
	int pop(){
		if(top_idx==-1){
			cout<<"stack underflow "<<endl;
			return -1;
		}
		cout<<"poping :"<<this->arr[this ->top_idx-1]<<"\n";
		this -> top_idx--;
			
	 
	}
	int top(){
	cout<< "top index is "<<top_idx<<" \n";
	return top_idx;
	}
	int size(){
	cout<<"size of stack is "<<top_idx+1<<" \n";
		return top_idx+1;
	}
};
int main(){
Stack st(6) ;
st.pop();
st.push(49);
st.top();
st.size();
st.push(45);
st.push(46);
st.push(47);
st.push(48);
st.push(42);
st.push(41);
st.push(40);
st.push(480);
st.top();
st.size();
st.pop();
st.pop();
st.pop();
st.top();
st.size();

	return 0;
}
