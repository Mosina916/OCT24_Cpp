#include<iostream>
using namespace std;

int main(){
	
	// int arr[4][3]={
	// 	{4,2,5},
	// 	{7,6,8},
	// 	{2,6,9},
	// 	{1,4,6}
	// };


	int arr[100][100];

	int tr,tc;
	cin>>tr>>tc;//4 3

	// int arr[tr][tc];


	for(int i=0;i<=tr-1;i++){//4
	for(int j=0;j<=tc-1;j++){
		cin>>arr[i][j];
	}
}



	for(int x=0;x<=tc-1;x++){
	if(x%2==0){
		// d/w
		for(int y=0;y<=tr-1;y++){
		cout<<arr[y][x]<<" ";
	}
	}
	else{
		// u/p
		for(int u=tr-1;u>=0;u--){
		cout<<arr[u][x]<<" ";
	}
	}

}








	


	return 0;
}