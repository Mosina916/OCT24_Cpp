#include<iostream>
using namespace std;
void decorder(int n){//0
	if(n==0){
		return;

	}

	cout<<n<<' ';//5 4 3 2 1
	decorder(n-1);
}


void incorder(int n){//5
	if(n==0){
		return;

	}
	incorder(n-1);
	cout<<n<<' ';//5 4 3 2 1
	
}
int main(){
	int n;
	cin>>n;//5
	//1 2 3 4 5

	decorder(n);


	// 4-->4 3 2 1
	
	
	
	return 0;
}