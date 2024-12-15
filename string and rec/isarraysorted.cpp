#include<iostream>
using namespace std;
bool issortedornot(int *arr,int n){

	// bcase
	if(n==1){
		return true;
	}

	// rec case
	 if(issortedornot(arr,n-1) and arr[n-2]<=arr[n-1]){
	 	return true;
	 }
	 return false;

}

bool issortedornot2(int *arr,int n){

	// bcase
	if(n==1){
		return true;
	}
	
	// rec case
	if(issortedornot2(arr+1,n-1) and arr[0]<=arr[1]){
		return true;
	}
	return false;
	 

}
int main(){
	int arr[]={3,5,7,1,12};
	int n=sizeof(arr)/sizeof(int);
	if(issortedornot2(arr,n)){
		cout<<"array is sorted "<<endl;
	}
	else{
		cout<<"array is not sorted"<<endl;
	}

	return 0;
}