#include <iostream>
#include <stack>
using namespace std;
// [{(())()}]{()}
bool isbalanced(char arr[]){
	stack<int> s;
	for(int i=0;arr[i]!='\0';i++){
	char ch=arr[i];//[
	switch(ch){
		case '[':s.push(ch);
		break;
		case '(':s.push(ch);
		break;
		case '{':s.push(ch);
		break;
		case ')':if(!s.empty() and s.top()=='('){
			s.pop();
		}
		else{
			return false;
		}
		break;
		case ']':if(!s.empty() and s.top()=='['){
			s.pop();
		}
		else{
			return false;
		}
		break;
		case '}':if(!s.empty() and s.top()=='{'){
			s.pop();
		}
		else{
			return false;
		}
		

	}
}

	return s.empty();

// if(s.empty()==true){
// 	return true;
// }
// return false;

}

int main(){


	char arr[]="[{({)()}]{()}";
	if(isbalanced(arr)==true){
		cout<<"balanced "<<endl;
	}
	else{
		cout<<"not balanced "<<endl;
	}
	

	

	return 0;

}