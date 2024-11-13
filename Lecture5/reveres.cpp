#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int no;
	cin>>no;
	int prevans=0;
	while(no!=0){
		int ld=no%10;
		prevans=prevans*10+ld;
		no=no/10;
	}

	cout<<prevans<<endl;

	return 0;
}