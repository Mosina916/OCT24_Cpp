#include <iostream>
using namespace std;

int main(){
	int tr;
	cin>>tr;//5


	// part 1-->1 to 5
	int r=1;
	while(r<=tr){
	// star
		int stno=tr;
	int i=1;
	while(i<=r){
		cout<<stno;
		stno=stno-1;
		i=i+1;
	}

	// space

	int j=1;
	while(j<=2*tr+1-(2*r)){
		cout<<" ";
		j=j+1;
	}


	// hash
	int k=1;
	int stnoo=tr+1-r;
	while(k<=r){
		cout<<stnoo;
		stnoo=stnoo+1;
		k=k+1;
	}
	cout<<endl;
	r=r+1;
}





	// part 2
	// 6 stars
	int a=1;
	int sn=tr;
	while(a<=tr+1){
		cout<<sn;
		sn=sn-1;
		a=a+1;
	}


// 5 hash	
	int b=1;
	int snn=1;
	while(b<=tr){
		cout<<snn;
		snn=snn+1;
		b=b+1;
	}

	cout<<endl;



	// part 3

	r=1;
	while(r<=tr){

	// star
	int c=1;
	int snnn=tr;
	while(c<=tr+1-r){
		cout<<snnn;
		snnn=snnn-1;
		c=c+1;
	}

	// space

	int d=1;
	while(d<=2*r-1){
		cout<<" ";
		d=d+1;
	}


	// hash
	int e=1;
	int stn=r;
	while(e<=tr+1-r){
		cout<<stn;
		stn=stn+1;
		e=e+1;
	}
	cout<<endl;
	r=r+1;
}


	

	
	


	return 0;
}