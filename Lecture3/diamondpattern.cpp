#include <iostream>
using namespace std;
// diamond
int main(){
	int tr;
	cin>>tr;//7


	int r=1;
	while(r<=(tr+1)/2){
	// spaces
	int i=1;
	while(i<=(tr+1)/2-r){
		cout<<" "<<'\t';
		i=i+1;
	}

	// stars
	int j=1;
	while(j<=2*r-1){
		cout<<"*"<<'\t';
		j=j+1;
	}

	cout<<endl;
	r=r+1;
}


// lower half
r=1;
while(r<=(tr-1)/2){

	// spaces
	int k=1;
	while(k<=r){
		cout<<" "<<'\t';
		k=k+1;
	}

	// stars
	int l=1;
	while(l<=tr-2*r){
		cout<<"*"<<'\t';
		l=l+1;
	}
	cout<<endl;
	r=r+1;

}
	

	
	


	return 0;
}