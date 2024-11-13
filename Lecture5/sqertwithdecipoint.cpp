#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int no;
	cin>>no;//13
	int decipoint;
	cin>>decipoint;//3


	float step=1;

	float i=0;

	int times=1;
	while(times<=decipoint+1){

	while(i*i<=no){
	i=i+step;//
	}
	i=i-step;//3.60
	step=step/10.0;//0.001
	times=times+1;
}

   cout <<setprecision(decipoint)<< i<< endl;

// cout<<i<<endl;


	
	
	


	return 0;
}