#include <iostream>
#include <stack>
using namespace std;
int main(){


	stack<int>s;
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