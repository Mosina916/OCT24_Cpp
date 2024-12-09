#include<iostream>
using namespace std;

int main(){

	// "vishwas\0"
	char arr[6]={'s','D','A','G','R','\0'};
	// cout<<arr<<endl;


	// for (int i = 0; i <=4; ++i)
	// {
	// 	cout<<arr[i];
	// }

	// int x=50;
	// cout<<&x<<endl;//hd
	// float u=70.6;
	// cout<<&u<<endl;//hd

	// char ch='U';
	// cout<<&ch<<endl;//U


	char arr[100];
	// cin>>arr;
	// cin.getline(arrayname,arraysize);//by default '\n'

	cin.getline(arr,100);//

	// cin.getline(arrayname,arraysize,delimter);
	cin.getline(arr,100,'$');





	cout<<arr<<endl;


	

	return 0;
}