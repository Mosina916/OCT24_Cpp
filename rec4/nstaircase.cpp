#include<iostream>
#include<climits>
using namespace std;
int nstaircase(int n,int k){
	if(n<0){
		return 0;
	}
	if(n==0){
		return 1;
	}

	int ans=0;
	for (int i = 1; i <=k; ++i)
	{
		ans=ans+nstaircase(n-i,k);
	}
	return ans;
}

int main(){
	int n,k;
	cin>>n>>k;
	cout<<nstaircase(n,k)<<endl;


	return 0;
}