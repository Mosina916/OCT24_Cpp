#include<iostream>
#include<algorithm>
using namespace std;
int main(){

	int arr[]={2,6,8,3,9};//2 3 6 8 9
	int n=sizeof(arr)/sizeof(int);


	// sort(arryname,arryname+n);
	sort(arr,arr+5);//2 3 6 8 9

	for (int i = 0; i <=4; ++i)
	{
		cout<<arr[i]<<" ";
	}
	







	return 0;
}