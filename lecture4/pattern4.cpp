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
	// int r=1;//ini
	// while(r<=tr){//condi
	// spaces
	// int i=1;
	// while(i<=tr-r){
	// 	cout<<" ";
	// 	i=i+1;
	// }
	// // stars
	// int j=1;
	// while(j<=r){
	// 	cout<<'*';
	// 	j=j+1;
	// }
	// cout<<endl;
	// r=r+1;//updat

// }

for(int r=1;r<=tr;r=r+1){
		int i=1;
	while(i<=tr-r){
		cout<<" ";
		i=i+1;
	}
	// stars
	int j=1;
	while(j<=r){
		cout<<'*';
		j=j+1;
	}
	cout<<endl;

}


	
	


	return 0;
}