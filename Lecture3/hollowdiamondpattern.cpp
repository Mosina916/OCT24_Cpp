#include <iostream>
using namespace std;
// diamond
int main(){
	int tr;
	cin>>tr;//7
	if(tr==1){
		cout<<'*'<<endl;
		return 0;
	}


	// row 1
	int i=1;
	while(i<=tr){
		cout<<'*'<<'\t';
		i=i+1;
	}
	cout<<endl;


	// part 2
	int r=1;
	while(r<=(tr-1)/2){

	// stars
	int j=1;
	while(j<=(tr+1)/2-r){
		cout<<'*'<<'\t';
		j=j+1;
	}
	


	// spaces

	int k=1;
	while(k<=2*r-1){
		cout<<' '<<'\t';
		k=k+1;
	}
	

	// stars
	int l=1;
	while(l<=(tr+1)/2-r){
		cout<<'*'<<'\t';
		l=l+1;
	}

	cout<<endl;
	r=r+1;
}


// part 3
r=1;
while(r<=(tr-1)/2 -1){

	// stars
	int a=1;
	while(a<=r+1){
		cout<<'*'<<'\t';
		a=a+1;
	}


// spaces
	int b=1;
	while(b<=tr-2-2*r){
		cout<<' '<<'\t';
		b=b+1;
	}


// star
	int c=1;
	while(c<=r+1){
		cout<<'*'<<'\t';
		c=c+1;
	}
	cout<<endl;
	r=r+1;
}


// last 
int d=1;
	while(d<=tr){
		cout<<'*'<<'\t';
		d=d+1;
	}
	cout<<endl;





	
	


	return 0;
}