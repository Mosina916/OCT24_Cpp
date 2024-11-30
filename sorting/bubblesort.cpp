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

	// bubble sort
	for(int c=1;c<=n-1;c++){
		for(int j=0;j<=n-c-1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);

			}
		}
	}

	// 1 2 3 4 5
	for (int i = 0; i <=n-1; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;





	return 0;
}