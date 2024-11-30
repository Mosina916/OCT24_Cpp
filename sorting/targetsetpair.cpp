#include<iostream>
#include<queue>
using namespace std;

int main(){


	int n;
	cin>>n;
	int arr[100000];
	for (int i = 0; i <=n-1; ++i)
	{
		cin>>arr[i];
	}

	int target;
	cin>>target;//5
	sort(arr,arr+n);//1 2 3 4 5 


	int i=0;
	int j=n-1;
	while(i<j){
	if(arr[i]+arr[j]==target){
		cout<<arr[i]<<" and "<<arr[j]<<endl;
		i++;
		j--;

	}
	else if(arr[i]+arr[j]>target){
		j--;

	}
	else{
		i++;

	}


}





	// 1 2 3 4 5
	



	return 0;
}