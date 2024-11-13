#include <iostream>
using namespace std;

int main(){
	int iv,fv,sv;
	cin>>iv>>fv>>sv;//0 300 20


	int f=iv;
	while(f<=fv){
		int c=(5.0/9)*(f-32);
		cout<<f<<"   "<<c<<endl;
		f=f+sv;
	}


	
	


	return 0;
}