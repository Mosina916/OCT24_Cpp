#include<iostream>
using namespace std;
int main(){
	
	// char arr[5][4]={
	// 	{'A','F','d','\0'},
	// 	{'k','i','d','\0'},
	// 	{'l','F','i','\0'},
	// 	{'s','r','d','\0'},
	// 	{'w','o','q','\0'},
		
	// };


	// "hello"

	char arr[5][4]={
		"AFd",
		"KID",
		"Lfi",
		"srd",
		"woq"
		
	};


	cout<<&arr[0][0]<<endl;
	cout<<&arr[1][0]<<endl;
	cout<<&arr[2][0]<<endl;
	cout<<&arr[3][0]<<endl;
	cout<<&arr[4][0]<<endl;


	// // cout<<arr<<endl;
	// cout<<&arr[0][0]<<endl;
	

	// cout<<&arr[1][0]<<endl;


	// cout<<&arr[2][0]<<endl;


	// cout<<&arr[3][0]<<endl;







	


	return 0;
}