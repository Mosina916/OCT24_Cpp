#include<iostream>
using namespace std;

int main(){
	int a=10;
	cout<<a<<endl;//10
	float f=90.34;
	cout<<f<<endl;

	// location/address
	// &bucketname

	// cout<<&a<<endl;//hexdv

	// int y=90;
	// char g='K'

	// datatype* nameofbucket=&a;//0x7ff7b10189d8

	int* b=&a;//0x7ff7b10189d8

	// cout<<b<<endl;

	int**c=&b;
	int***d=&c;



	// *pointerbucket-->bucketname
	// *d-->c

	// *c-->b

	// *b
	// cout<<b<<endl;
	// cout<<*(*d)<<endl;

	// cout<<*(*(*d))<<endl;\




	// a*b-->buc,,,product,,dtype *

	// int *b=&s;


	// *c




	
	return 0;
}



