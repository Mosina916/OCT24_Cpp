#include<iostream>
using namespace std;
 int sumofdigit(int n){//0
	// base case
	if(n==0){
		return 0;
	}
	
	// rec case
	return n%10+sumofdigit(n/10);
	

}
int main(){
	int n;
	cin>>n;//34262
	cout<<sumofdigit(n)<<endl;

	return 0;
}