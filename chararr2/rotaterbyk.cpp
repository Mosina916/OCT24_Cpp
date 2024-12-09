// CodingBlocks\0<---i/p
// ocksCodingBl\0<--o/p          


// 12-4-->8

#include<iostream>
using namespace std;
int lengthofarr(char arr[100]){

	int c=0;

	int i=0;
	while(arr[i]!='\0'){
	c++;
	i++;
}
return c;
}



void rotatebyk(char arr[100],int k){
	int m=lengthofarr(arr);//12


	for(int i=m;i>=0;i--){
		arr[i+k]=arr[i];
	}
	//16


	int j=m;
	int l=0;
	for(int p=1;p<=k;p++){
	swap(arr[l],arr[j]);
	l++;
	j++;
}

arr[m]='\0';


	


}


int main(){
	char arr[100];
	cin.getline(arr,100);//codingblocks\0
	int k;
	cin>>k;//14

	int l=lengthofarr(arr);//12

	k=k%l;
		rotatebyk(arr,k);

	cout<<arr<<endl;

	return 0;
}

