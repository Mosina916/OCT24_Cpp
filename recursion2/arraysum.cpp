#include<iostream>
using namespace std;
int sumofarr3(int *arr,int n,int i){
	if(i==n){
		return 0;
	}


	return arr[i]+sumofarr3(arr,n,i+1);
}
int main(){
	int arr[]={3,4,1,2,5};
	int n=sizeof(arr)/sizeof(int);
	cout<<sumofarr3(arr,n,0)<<endl;
	
	
	
	return 0;
}