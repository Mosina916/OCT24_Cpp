#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int a=2,b=0,c=-1,d=1,e=-30;
	if(a++ and b++ and ++c and d--){
		cout<<"hello"<<endl;
	}
	else if(++a and ++b and ++c and e++){
		cout<<"hii"<<endl;
	}
	else if(a-- and b++ and --c and --d){
		cout<<"coding"<<endl;
	}
	else if(--a and b-- and e++ and --d){
		cout<<"hey"<<endl;
	}

	else{
		cout<<"blocks"<<endl;
	}

	cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;


	return 0;
}