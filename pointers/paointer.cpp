#include<iostream>
using namespace std;

int main(){

	char ch='A';
	// cout<<ch<<endl;

	char*b=&ch;



	// cout<<sizeof(ch)<<endl;
	// cout<<sizeof(&ch)<<endl;


	char** c=&b;

	cout<<c<<endl;

	cout<<b<<endl;



	
	return 0;
}



