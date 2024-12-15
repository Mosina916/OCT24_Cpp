#include<iostream>
using namespace std;
int main(){
	// datatype nameofarr[rows][cols];
	// int arr[4][3];
	// access
	// arrayname[rowno][colno];
	// arr[3][1]=30;


	// arr[0][0]=10;
	// arr[0][1]=20;
	// arr[0][2]=13;


	// cin>>arr[0][0];
	// cin>>arr[0][1];
	// cin>>arr[0][2];


	int arr[100][100];

	int tr,tc;
	cin>>tr>>tc;//4 3

	int arr[tr][tc];


	for(int i=0;i<=tr-1;i++){//4
	for(int j=0;j<=tc-1;j++){
		cin>>arr[i][j];
	}
}



// print

for(int i=0;i<=tr-1;i++){//4
	for(int j=0;j<=tc-1;j++){
		cout<<arr[i][j]<<" ";
	}
	cout<<endl;
}





// 2nd row

	// for(int j=0;j<=2;j++){
	// 	cin>>arr[1][j];
	// }


	//  // 3nd row

	// for(int j=0;j<=2;j++){
	// 	cin>>arr[2][j];
	// }

	// // 4th row
	// for(int j=0;j<=2;j++){
	// 	cin>>arr[3][j];
	// }


	return 0;
}