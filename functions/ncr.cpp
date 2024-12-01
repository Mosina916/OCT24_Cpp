#include<iostream>
using namespace std;
int fact(int n);
int ncr(int n,int r){
	int fans=fact(n)/(fact(r)*fact(n-r));
	return fans;
}
int fact(int n){

	int ans=1;

	for(int i=n;i>=1;i--){
	ans=ans*i;//5*4-->20*3-->60*2-->120*1-->120
	}
	return ans;
}
int main(){
	int n,r;
	cin>>n>>r;
	cout<<ncr(n,r)<<endl;

	return 0;
}



