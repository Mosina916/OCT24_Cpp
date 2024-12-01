#include<iostream>
using namespace std;
int fact(int n){

	int ans=1;

	for(int i=n;i>=1;i--){
	ans=ans*i;//5*4-->20*3-->60*2-->120*1-->120
	}

	cout<<ans<<endl;
	return ans;
}
int main(){
	int n;
	cin>>n;
	cout<<fact(n)<<endl;

	// 5-->5*4*3*2*1
	


	


	return 0;
}

