#include<iostream>
using namespace std;
bool issorted3(int *arr,int n,int i){
	if(i==n-1){
		return true;
	}

	if(arr[i]<=arr[i+1] and issorted3(arr,n,i+1)){
		return true;

	}
	return false;
	
}
int main(){
	int arr[]={3,4,7,8,9};
	int n=sizeof(arr)/sizeof(int);
	cout<<issorted3(arr,n,0)<<endl;
	
	
	
	return 0;
}