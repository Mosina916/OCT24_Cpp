#include<iostream>
using namespace std;
int fibo(int n){//5
	// base case
	if(n==2||n==1){
		return n-1;
	}
	// if(n==1){
	// 	return 0;
	// }

	// rec case
	// return fibo(n-1)+fibo(n-2);
	int x=fibo(n-1);
	int y=fibo(n-2);
	return x+y;
}


// 0 base 

int fibo(int n){
	// base case
	if(n==1){
		return 1;
	}
	if(n==0){
		return 0;
	}


	// rec case
	return fibo(n-1)+fibo(n-2);
}
int main(){
	int n;
	cin>>n;
	cout<<fibo(n)<<endl;
	
	
	return 0;
}