#include<iostream>
using namespace std;

int main(){

	// int a=90;
	// int*b=&a;
	// int**c=&b;
	// int***d=&c;

	// // cout<<(*(*(*(&(*(*(&(&(&(*(&(&a))))))))))))<<endl;


	// int arr

	int arr[]={3,5,4,7,6};


	cout<<*(arr)<<endl;//3
	cout<<arr[0]<<endl;//3

	cout<<*(arr+1)<<endl;
	cout<<arr[1]<<endl;

	cout<<*(arr+2)<<endl;
	cout<<arr[2]<<endl;

	// cout<<arr<<endl;
	// cout<<&arr[0]<<endl;
	// cout<<arr+1<<endl;
	// cout<<&arr[1]<<endl;
	// cout<<arr+2<<endl;
	// cout<<&arr[2]<<endl;
	// cout<<&arr[3]<<endl;
	// cout<<&arr[4]<<endl;

	
	return 0;
}



