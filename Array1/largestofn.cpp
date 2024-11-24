#include<iostream>
using namespace std;
int main(){

	int arr[100];
	int nopu;
	cin>>nopu;//5

	
	for(int i=0;i<=nopu-1;i++){
		cin>>arr[i];//3 -2 1 7 -13
	}

	int atkl=arr[0];//3

	int i=1;
	while(i<=nopu-1){
	if(arr[i]>atkl){//-13 >7
		atkl=arr[i];//7

	}
	i++;
}


cout<<"largest of arr is "<<atkl<<endl;




	

	
	



// print





	return 0;
}