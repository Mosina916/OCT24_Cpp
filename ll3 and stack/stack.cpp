#include <iostream>
#include <vector>
using namespace std;
class Stack{

	vector<int> v;
public:
	// push
	void push(int d){
		v.push_back(d);

	}


	// pop
	void pop(){
		v.pop_back();

	}


	// top

	int top(){
		return v[v.size()-1];
	}


	// empty
	bool empty(){
		return v.size()==0;
	}

	// size
	int size(){
		return v.size();
	}

};
int main(){
	Stack s;
	s.push(30);
	s.push(50);
	s.push(90);
	s.push(15);
	cout<<s.v[2]<<endl;
	// cout<<s.top()<<endl;


	return 0;

}