#include<iostream>
using namespace std;
bool check7(int *arr,int n){
	if(n==0){
		return false;
	}
	// 6,9,8,5,7,6,17
	if(arr[0]==7||check7(arr+1,n-1)==true){
		return true;
	}
	return false;
}
bool check7sec(int *arr,int n){
	if(n==0){
		return false;
	}

	if(arr[n-1]==7||check7(arr,n-1)){
		return true;
	}
	return false ;
}

bool check7third(int *arr,int n,int i){
	if(i==n){
		return false;
	}

	if(arr[i]==7){
		return true;
	}
	return check7third(arr,n,i+1);
}
int main(){

	int arr[]={6,9,8,5,7,6,17};
	int n=sizeof(arr)/sizeof(int);
	cout<<check7(arr,n)<<endl;
	cout<<check7sec(arr,n)<<endl;
	cout<<check7third(arr,n,0)<<endl;

	
	return 0;
}