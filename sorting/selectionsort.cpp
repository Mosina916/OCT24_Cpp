#include<iostream>
#include<queue>
using namespace std;

int main(){


	// int arr[]={5,4,3,2,1,8,5,3,2,32,4,2,42,4,24,24,24,2,5,52,42,4,2,42,4,24,2,4};
	// int n=sizeof(arr)/sizeof(int);

	int arr[1000000];
		int n;
	cin>>n;//5
	for (int i = 0; i <=n-1; ++i)
	{
		cin>>arr[i];
	}

	// selectionsort sort


	for(int pos=0;pos<=n-2;pos++){//4
	int atkim=pos;//3

	for(int j=atkim+1;j<=n-1;j++){
		if(arr[j]<arr[atkim]){
			atkim=j;
		}
	}
	swap(arr[pos],arr[atkim]);
}
	//1 2 4 5 3



	// 1 2 3 4 5
	for (int i = 0; i <=n-1; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;





	return 0;
}