#include<iostream>
using namespace std;
// int firstindex(int *arr,int n,int i){//2

// 	if(i==n){
// 		return -3;
// 	}

// 	if(arr[i]==7){
// 		return i;
// 	}
// 	return firstindex(arr,n,i+1);//2
// }

int lastindex(int *arr,int n,int i){//2

	if(i==-1){
		return -3;
	}

	if(arr[i]==7){
		return i;
	}
	return lastindex(arr,n,i-1);//2
}

void allindex(int *arr,int n,int i){//2

	if(i==n){
		return ;
	}

	if(arr[i]==7){
		cout<<i<<" ";//2 4
	}
	allindex(arr,n,i+1);//2
}
int main(){
	int arr[]={5,6,7,3,7,6,4,3};
	int  n=sizeof(arr)/sizeof(int);

	allindex(arr,n,0);

	// int x=firstindex(arr,n,0);
	// if(x>=0){
	// 	cout<<x<<endl;
	// }

	// int x=lastindex(arr,n,n-1);
	// if(x>=0){
	// 	cout<<x<<endl;
	// }
	

	return 0;
}