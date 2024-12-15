#include<iostream>
using namespace std;
 int fact(int n){//5
	// base case
	if(n==0){
		return 1;
	}
	// rec case
	// int p=fact(n-1);//pure assumption
	// int fans=n*p;//120
	// return fans;
	return n*fact(n-1);

}
int main(){
	int n;
	cin>>n;//0
	cout<<fact(n)<<endl;

	return 0;
}