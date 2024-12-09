#include<iostream>
using namespace std;
// int sumtwo(int a,int b){
// 	return a+b;
// }

// int sumthree(int a,int b,int c){
// 	return a+b+c;
// }

// int sumfour(int a,int b,int c,int d){
// 	return a+b+c+d;
// }

// int sum(int a=0,int b=0,int c=0,int d=0,int e=0){
// 	return a+b+c+d+e;
// }

int mulkt(int a=1,int b=1,int c=1,int d=1,int e=1){
	return a*b*c*d*e;
}
int main(){

	cout<<mulkt(2,3)<<endl;
	cout<<mulkt(4,7,2)<<endl;
	cout<<mulkt(4,9,2,3)<<endl;

	// cout<<sum(2,3)<<endl;
	// cout<<sum(4,7,2)<<endl;
	// cout<<sum(4,9,2,3)<<endl;

	// cout<<sumtwo(2,3)<<endl;
	// cout<<sumthree(4,7,2)<<endl;
	// cout<<sumfour(4,9,2,3)<<endl;
	return 0;
}