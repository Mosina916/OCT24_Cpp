#include <iostream>
using namespace std;
	// *
 //   **#
 //  ***##
 // ****###
int main(){
	int tr;
	cin>>tr;
	

	int r=1;
	while(r<=tr){
	// spaces

	int i=1;
	while(i<=tr-r){
		cout<<" "<<'\t';
		i=i+1;
	}

	// star for inc
	int stno=r;
	int j=1;
	while(j<=r){
		cout<<stno<<'\t';
		stno=stno+2;
		j=j+1;
	}


	// hash fotr dec
	// int stnoo=2*r-2;
	int stnoo=stno-4;

	int k=1;
	while(k<=r-1){
		cout<<stnoo<<'\t';
		stnoo=stnoo-2;
		k=k+1;
	}

	cout<<endl;
	r=r+1;
}


	
	


	return 0;
}