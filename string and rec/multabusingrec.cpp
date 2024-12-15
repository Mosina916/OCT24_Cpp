#include<iostream>
using namespace std;
 int multiply(int a,int b){//0
	// base case
	if(b==0){
		return 0;
	}
	
	
	// rec case
	return a+multiply(a,b-1);
	

}
int main(){
	int a,b;
	cin>>a>>b;//3,5
	cout<<multiply(a,b)<<endl;

	return 0;
}