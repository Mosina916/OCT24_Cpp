#include<iostream>
using namespace std;
bool checkkeyispresent(int arr[4][3],int key,int tr,int tc){//6
	for(int i=0;i<=tr-1;i++){//1
	for(int j=0;j<=tc-1;j++){//
	if(arr[i][j]==key){
		return true;

	}
}

}
return false;

}
int main(){
	
	int arr[4][3]={
		{4,2,5},
		{7,6,8},
		{2,6,9},
		{1,4,6}
	};
	// 6 is present or not

	int key;
	cin>>key;//60


	if(checkkeyispresent(arr,key,4,3)){
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;

	}







	


	return 0;
}