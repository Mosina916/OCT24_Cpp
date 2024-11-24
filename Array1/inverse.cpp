#include<iostream>
using namespace std;
int main(){

	int arr[100];
	int nopu;
	cin>>nopu;//5

	
	for(int i=0;i<=nopu-1;i++){
		cin>>arr[i];//3 -2 1 7 -13
	}


	int temp[100];


	for(int i=0;i<=nopu-1;i++){
		temp[arr[i]]=i;

	}


	for (int i = 0; i <=nopu-1; ++i)
	{
		cout<<temp[i]<<" ";
	}

	cout<<endl;



	







	return 0;
}