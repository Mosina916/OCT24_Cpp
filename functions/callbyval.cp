#include<iostream>
using namespace std;

void f(int &n){
	n=n+30;
	cout<<n<<endl;//40
}



// void f(int &n){
// 	n=n+30;
// 	cout<<n<<endl;//40
// }

// int f(int n){
// 	n=n+30;
// 	return n;


// 	cout<<n<<endl;
// 	cout<<"hello"<<endl;
// }
int main(){
	int n;
	cin>>n;//10
	cout<<n<<endl;//10
	f(n);

	cout<<n<<endl;//
	
	return 0;
}



