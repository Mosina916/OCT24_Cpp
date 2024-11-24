#include<iostream>
using namespace std;
int main(){

	int arr[100];
	int nopu;
	cin>>nopu;//5

	
	for(int i=0;i<=nopu-1;i++){
		cin>>arr[i];
	}
	int value;
	cin>>value;

	int i=0;
	while(i<=nopu-1){
		if(value==arr[i]){
			cout<<i<<endl;
			// cout<<"yes "<<value<<" is present at index "<<i<<endl;
			
		}
		i++;
	}

	
	



// print





	return 0;
}