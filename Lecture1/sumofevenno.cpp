#include <iostream>
using namespace std;
int main(){
	// int sum=0;

	// int i=2;
	// while(i<=10){
	// 	cout<<i<<" ";
	// 	i=i+2;
	// }
	int n;
	cin>>n;
	int sum=0;

	int i=2;
	while(i<=n){
		
		sum=sum+i;//30
		i=i+2;//12
	}

	cout<<sum<<endl;



	return 0;
}