#include<iostream>
using namespace std;
void convertnreveresewords(int n,string arr[10]){//2
	if(n==0){
		return;
	}


	int p=n%10;//2
	cout<<arr[p]<<" ";
	convertnreveresewords(n/10,arr);

}

int main(){
	int n;
	cin>>n;//2048 eight four zero two

	string arr[10]={"zero","one","Two","three","four","five","six","seven","eight","nine"};
	convertnreveresewords(n,arr);

	

	return 0;
}