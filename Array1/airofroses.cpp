#include<iostream>
#include<algorithm>
using namespace std;
int main(){

	int arr[100000];
	int t;
	cin>>t;
	for(int k=1;k<=t;k++){
	int n;
	cin>>n;//5

	
	for(int i=0;i<=n-1;i++){
		cin>>arr[i];//10 2 6 8 4
	}

	int money;
	cin>>money;
	int r1,r2;

	sort(arr,arr+n);// 2 4 6 8 10

	int i=0;
	int j=n-1;
	while(i<j){
		if(arr[i]+arr[j]==money){
			r1=arr[i];
			r2=arr[j];
			i++;
			j--;

		}
		else if(arr[i]+arr[j]>money){
			j--;
		}
		else{
			i++;
		}
	}


	cout<<"Deepak should buy roses whose prices are "<<r1<<" and "<<r2<<"."<<endl;

}



	







	return 0;
}