#include<iostream>
using namespace std;

int main(){

	char arr[100];

	char ch;
	int i=0;
	ch=cin.get();//h
	while(ch!='$'){
		arr[i]=ch;
		i++;
		ch=cin.get();//'\n'

	}
	arr[i]='\0';


	cout<<arr<<endl;


	return 0;
}