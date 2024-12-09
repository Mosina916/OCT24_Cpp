#include<iostream>
using namespace std;
void f(int*ptr){
	*ptr=*ptr+90;
	cout<<*ptr<<endl;
}
int main(){
	int a=10;

	f(&a);

	cout<<a<<endl
	

	return 0;
}