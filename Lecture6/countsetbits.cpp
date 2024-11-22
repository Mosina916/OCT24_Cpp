#include<iostream>
using namespace std;
int main(){

	int co=0;
	int no;
	cin>>no;//23

	while(no!=0){
	if((no&1)==1){
		co++;//4
		
	}
	no=no>>1;
}
cout<<co<<endl;


	


	return 0;
}