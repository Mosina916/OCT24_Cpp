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

	// insertionsort sort

	int i;
	for(int j=1;j<=n-1;j++){//8
	int ele=arr[j];//-3;

	for(i=j-1;i>=0;i--){//-1
	if(ele<arr[i]){//-3 0
		arr[i+1]=arr[i];

	}
	else{
		break;
	}
}

arr[i+1]=ele;
}






	// 1 2 3 4 5
	for (int i = 0; i <=n-1; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;





	return 0;
}