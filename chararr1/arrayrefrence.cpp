#include<iostream>
using namespace std;
void f(int*b,int n){
	// void f(int b[],int n){

	for(int i=0;i<=n-1;i++){
		b[i]=b[i]+10;
	}


	for (int i = 0; i <=n-1; ++i)
	{
		cout<<b[i]<<" ";
	}
	cout<<endl;

}
int main(){
	int t=90;
	int arr[]={5,4,6,3,7};
	int n=sizeof(arr)/sizeof(int);


	cout<<arr<<endl;//adrees of ist byte of first bucket

	for (int i = 0; i <=n-1; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	f(arr,n);


	for (int i = 0; i <=n-1; ++i)
	{
		cout<<arr[i]<<" ";
	}

	return 0;
}