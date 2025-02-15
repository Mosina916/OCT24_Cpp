#include <iostream>
#include <vector>
using namespace std;
class node{
public:
	int data;
	node*next;
	node(int d){
		data=d;
		next=NULL;
	}
};
class Stack{
	node*head;
	int l;



public:
	Stack(){
		head=NULL;
		l=0;
	}
	// push
	void push(int d){
		node*ptr=new node(d);
		ptr->next=head;
		head=ptr;
		l++;//4

		

	}


	// pop
	void pop(){
		node*temp=head;
		head=head->next;
		delete temp;
		temp=NULL;
		l--;
		

	}


	// top

	int top(){
		return head->data;
		
	}


	// empty
	bool empty(){
		// return head==NULL;
		return l==0;
		
	}

	// size
	int size(){
		return l;
		
	}

};
int main(){
	Stack s;
	s.push(30);
	s.push(50);
	s.push(90);
	s.push(15);
	s.push(5);
	// cout<<s.v[2]<<endl;
	while(!s.empty()){
	cout<<s.top()<<endl;//5
	s.pop();
}


	return 0;

}