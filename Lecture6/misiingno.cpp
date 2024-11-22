#include<iostream>
using namespace std;
int main(){


	// this sol will not work when n is very large

// 	int n;
// 	cin>>n;//7
// 	int ts=(n)*(n+1)/2;//28

// 	for(int i=1;i<=n-1;i++){
// 	int no;
// 	cin>>no;//2
// 	ts=ts-no;
// }

// cout<<ts<<endl;


	int n;
	cin>>n;//7

	int ans=0;
	for(int i=1;i<=n;i++){
		ans=ans^i;//0^1^2^3^4^5^6^7
	}

	for(int i=1;i<=n-1;i++){
	int no;
	cin>>no;
	
	ans=ans^no;////^4
}

cout<<ans<<endl;


	


	return 0;
}