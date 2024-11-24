#include<iostream>
using namespace std;
int main(){

	// int arr[5];
	// arr[0]=10;
	// arr[1]=20;
	// arr[2]=80;
	// arr[3]=20;
	// arr[4]=90;
	// cin>>arr[0];

	// cin>>arr[1];
	// cin>>arr[2];
	// cin>>arr[3];
	// cin>>arr[4];
// 	int i=0;
// 	while(i<=4){
// 	cin>>arr[i];
// 	i++;
// }


	// int arr[5]={3,6,2,1,9};
	// int arr[5]={3,6};
	// int arr[5]={0};

	// int arr[5]={};
	// for(int i=0;i<=4;i++){
	// 	cin>>arr[i];
	// }


	int arr[]={3,6,2,1,9};
	int n=sizeof(arr)/sizeof(int);
	


// print
	
	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<" ";
	}

// 	int i=0;
// 	while(i<=4){
// 	cin>>arr[i];
// 	i++;
// }

	// cout<<arr[0]<<" ";
	// cout<<arr[1]<<" ";
	// cout<<arr[2]<<" ";
	// cout<<arr[3]<<" ";
	// cout<<arr[4]<<" ";







	return 0;
}