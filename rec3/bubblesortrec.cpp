#include<iostream>
using namespace std;
// void bubblesortrec(int arr[1000000],int n,int c){//5 4 3 2 1
// 	if(c==n){
// 		return;
// 	}

// 	for(int j=0;j<=n-c-1;j++){
// 			if(arr[j]>arr[j+1]){
// 				swap(arr[j],arr[j+1]);

// 			}
// 		}
// 		// 1 2 3 4 5
// 		bubblesortrec(arr,n,c+1);
// }

void bubblesortrec(int arr[1000000],int n,int c,int j){//2 0
	if(c==n){
		return;
	}
	if(j==n-c){
		bubblesortrec(arr,n,c+1,0);//2 0

	}
	else{

			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);

			}
			bubblesortrec(arr,n,c,j+1);
		}
}
int main(){

	int arr[1000000];
		int n;
	cin>>n;//5
	for (int i = 0; i <=n-1; ++i)
	{
		cin>>arr[i];
	}

	// 5 4 3 2 1


	bubblesortrec(arr,n,1,0);

	for (int i = 0; i <=n-1; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;

	

	return 0;
}