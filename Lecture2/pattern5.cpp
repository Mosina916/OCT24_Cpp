#include <iostream>
using namespace std;
// 	   *
//    **
//   ***
//  ****
// *****
int main(){
	int tr;
	cin>>tr;

	int r=1;
	while(r<=tr){


	// spaces
	int i=1;
	while(i<=r-1){
		cout<<" ";
		i=i+1;
	}
	// stars
	int j=1;
	while(j<=tr+1-r){
		cout<<'*';
		j=j+1;
	}
	cout<<endl;
	r=r+1;

}


	
	


	return 0;
}