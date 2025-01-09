#include<iostream>
#include<climits>
using namespace std;
void mergetwosortedarr(int arr1[],int m,int arr2[],int n){
	int temp[100];
	int i=0;
	int j=0;
	int k=0;

	while(i<=m-1 and j<=n-1){
	if(arr1[i]<arr2[j]){
		temp[k]=arr1[i];
		i++;
		k++;

	}
	else{
		temp[k]=arr2[j];
		j++;
		k++;
	}
}

	// arr2 kahatm 
	while(i<=m-1){
	temp[k]=arr1[i];
	k++;
	i++;
}


	// arr1 kahatm 
	while(j<=n-1){
	temp[k]=arr2[j];
	k++;
	j++;
}


for (int l = 0; l <n+m ;l++)
{
	cout<<temp[l]<<" ";
}


}

int main(){
	int arr1[]={1,3,5,9,10};
	int arr2[]={2,4,6,7};
 
	int m=5;
	int n=4;


	mergetwosortedarr(arr1,m,arr2,n);
	


	return 0;
}