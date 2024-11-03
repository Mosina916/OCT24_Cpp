#include <iostream>
using namespace std;
// diamond
int main(){
	int tr;
	cin>>tr;

	// part1 -->row 1
	// spaCES
	int i=1;
	while(i<=tr-1){
		cout<<" ";
		i=i+1;
	}
	// stars
	int j=1;
	while(j<=tr){
		cout<<"*";
		j=j+1;
	}

	cout<<endl;



	// middle part
	int r=1;
	while(r<=tr-2){

	// spaces
	int k=1;
	while(k<=tr-1-r){
		cout<<" ";
		k=k+1;
	}
	cout<<"*";
	// spaves

	int l=1;
	while(l<=tr-2){
		cout<<" ";
		l=l+1;
	}

	cout<<"*";
	cout<<endl;
	r=r+1;
}


// last
	int p=1;
	while(p<=tr){
		cout<<"*";
		p=p+1;
	}

	cout<<endl;








	

	
	


	return 0;
}