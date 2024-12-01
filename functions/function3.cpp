#include<iostream>
using namespace std;
// returntype functionname(arguments/paramters){
// statements//kaam

// }
void printstat(){
	cout<<"hello"<<endl;
	cout<<"hii"<<endl;
	cout<<"heyy"<<endl;


}


int arshiya();//foward declearation

// aradhya(datatype name){

void aradhya(float a,int b){
	float mul=a*b;
	cout<<mul<<endl;

}


int aryan(int s,int p){
	int ans=s-p;//-2

	cout<<ans<<endl;
	return ans;
		

}
int main(){
	// int a=10;
	// int b=90;

	// cout<<a<<endl;
	// printstat();
	// cout<<b<<endl;


	// cout<<a<<endl;
	// cout<<b<<endl;
	// printstat();
	
	// printstat();
	// cout<<a<<endl;
	// cout<<b<<endl;
	

	cout<<arshiya()<<endl;


	aradhya(4.2,7);
	int s,t;
	cin>>s>>t;//8 10
	aryan(s,t);


	return 0;
}

int arshiya(){
	int x,y;
	cin>>x>>y;

	return x+y;
	// int sum=x+y;
	// cout<<sum<<endl;
	// return sum;

}