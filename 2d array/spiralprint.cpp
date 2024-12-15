#include<iostream>
using namespace std;
void spiralprint(int arr[6][5],int tr,int tc){

	int sr=0,sc=0,er=tr-1,ec=tc-1;
	while(sr<=er and sc<=ec){
	// forward
	for(int i=sc;i<=ec;i++){//3
	cout<<arr[sc][i]<<" ";
	}

	sr++;

	// downward
	for(int j=sr;j<=er;j++){
	cout<<arr[j][ec]<<" ";
	}

	ec--;

	// backward
	for(int k=ec;k>=sc;k--){//1
	cout<<arr[er][k]<<" ";
}
er--;
// upward
	for(int l=er;l>=sr;l--){//2
		cout<<arr[l][sc]<<" ";
	}
	sc++;

}

}
int main(){
	int arr[4][5]={
		{38,45,24,53,72},
		{23,44,22,56,74},

		{33,24,22,52,47},
		{35,44,42,56,73},

	};
	

	spiralprint(arr,4,5);








	


	return 0;
}