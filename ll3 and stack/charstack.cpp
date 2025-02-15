#include <iostream>
#include <vector>
using namespace std;
template <typename T>
class Stack{

	vector<T> v;
public:
	// push
	void push(T d){
		v.push_back(d);

	}


	// pop
	void pop(){
		v.pop_back();

	}


	// top

	T top(){
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
	Stack<int>s;
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