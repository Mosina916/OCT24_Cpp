#include<iostream>
#include<climits>
using namespace std;
void mergetwosortedarr(int arr[],int s,int e){
	int temp[100];
	int i=s;
	int mid=(s+e)/2;
	int j=mid+1;
	int k=s;

	while(i<=mid and j<=e){
	if(arr[i]<arr[j]){
		temp[k]=arr[i];
		i++;
		k++;

	}
	else{
		temp[k]=arr[j];
		j++;
		k++;
	}
}

	// arr2 kahatm 
	while(i<=mid){
	temp[k]=arr[i];
	k++;
	i++;
}


	// arr1 kahatm 
	while(j<=e){
	temp[k]=arr[j];
	k++;
	j++;
}

// copy temp to arr
for (int l = s; l <=e ;l++)
{
	arr[l]=temp[l];
}


}


void mergesort(int arr[],int s,int e){
	if(s==e){
		return;
	}



	int mid=(s+e)/2;
	mergesort(arr,s,mid);
	mergesort(arr,mid+1,e);
	mergetwosortedarr(arr,s,e);


}

int main(){
	int arr[]={4,2,5,5,43,43,34,1,56,43,3,1};
	int n=sizeof(arr)/sizeof(int);
	mergesort(arr,0,n-1);

	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	


	return 0;
}