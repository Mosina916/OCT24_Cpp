#include<iostream>
using namespace std;
int main(){

	int tr;
	cin>>tr;

	int r=1;
	while(r<=tr){
		if(r%2==0){
			// stars
			int stno=0;
			int i=1;
			while(i<=r){
				cout<<stno;
				stno=1-stno;
				// if(stno==0){
				// 	stno=1;
				// }
				// else{
				// 	stno=0;
				// }

				i=i+1;
			}

		}
		else{
			// hash-->odd
			int i=1;
			int stnno=1;
			while(i<=r){
				cout<<stnno;
				stnno=1-stnno;
				// if(stnno==0){
				// 	stnno=1;
				// }
				// else{
				// 	stnno=0;
				// }

				i=i+1;
			}

		}





		cout<<endl;
		r=r+1;

	}

	


	return 0;
}