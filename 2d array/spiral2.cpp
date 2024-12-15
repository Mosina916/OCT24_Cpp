#include<iostream>
using namespace std;
void spiralprint(int arr[8][3],int tr,int tc){

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
	int arr[8][3]={
		{38,45,24},
		{23,44,22},
		{33,24,22},
		{35,44,42},
		{24,53,72},
		{37,87,54},
		{54,97,94},
		{43,56,76}

	};
	

	spiralprint(arr,8,3);








	


	return 0;
}