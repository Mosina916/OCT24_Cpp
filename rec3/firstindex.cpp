#include<iostream>
using namespace std;
int firstindex(int *arr,int n,int i){//2

	if(i==n){
		return -3;
	}

	if(arr[i]==7){
		return i;
	}
	return firstindex(arr,n,i+1);//2
}
int main(){
	int arr[]={5,6,7,3,7};
	int  n=sizeof(arr)/sizeof(int);

	int x=firstindex(arr,n,0);
	if(x>=0){
		cout<<x<<endl;
	}
	

	return 0;
}