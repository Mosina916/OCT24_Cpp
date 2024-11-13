#include <iostream>
using namespace std;

int main(){


	// int U8734;//valid

	// int ?hsgryy43

	// int 8gsvfg
	// int _bsfh3
	int no;
	cin>>no;
	int sum=0;
	while(no>0){
		int ld=no%10;
		sum=sum+ld;
		no=no/10;
	}

	cout<<sum<<endl;

	

	
	


	return 0;
}