#include<iostream>
using namespace std;
int main(){
	int no;
	int n;
	cin>>n;
	for(int no=1;no<=n;no++){
	int i=2;
	while(i<=no-1){
	if(no%i==0){
		// cout<<"no is not prime"<<endl;
		break;

	}
	i++;//3
}

if(i==no){
	cout<<no<<endl;
}
}










	return 0;
}