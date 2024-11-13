#include <iostream>
using namespace std;
	// *
 //   ***
 //  *****
 // *******
int main(){
	int tr;
	cin>>tr;

	// int r=1;
	// while(r<=tr){


// 	// spaces
// 	int i=1;
// 	while(i<=tr-r){
// 		cout<<" "<<'\t';
// 		i=i+1;
// 	}
// 	//no 
// 	int stno=1;
// 	int j=1;
// 	while(j<=2*r-1){
// 		cout<<stno<<'\t';
// 		stno=stno+1;
// 		j=j+1;
// 	}
// 	cout<<endl;
// 	// r=r+1;
// }


for(int r=1;r<=tr;r=r+1){
	// spaces
	int i=1;
	while(i<=tr-r){
		cout<<" "<<'\t';
		i=i+1;
	}
	//no 
	int stno=1;
	int j=1;
	while(j<=2*r-1){
		cout<<stno<<'\t';
		stno=stno+1;
		j=j+1;
	}
	cout<<endl;

}


	
	


	return 0;
}