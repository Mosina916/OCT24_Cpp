#include<iostream>
using namespace std;
int sumofarr(int *arr,int n){
	if(n==0){
		return 0;
	}


	return arr[0]+sumofarr(arr+1,n-1);
}

int sumofarr1(int *arr,int n){
	if(n==0){
		return 0;
	}


	return arr[n-1]+sumofarr1(arr,n-1);
}
int main(){
	int arr[]={3,5,7,1,2};
	int n=sizeof(arr)/sizeof(int);
	cout<<sumofarr(arr,n)<<endl;

	cout<<sumofarr1(arr,n)<<endl;
	return 0;
}