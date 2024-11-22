#include<iostream>
using namespace std;
int main(){
	int no;
	cin>>no;//7
	int i=2;
	while(i<=no-1){
	if(no%i==0){
		cout<<"no is not prime"<<endl;
		break;

	}
	i++;//3
}

if(i==no){
	cout<<"No is prime"<<endl;
}










	return 0;
}