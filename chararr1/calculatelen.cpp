#include<iostream>
using namespace std;
// lengthofarr(char *arr)
int lengthofarr(char arr[100]){

	int c=0;

	int i=0;
	while(arr[i]!='\0'){
	c++;
	i++;
}
return c;
}

bool palindrome(char arr[100]){
	int i=0;
	int j=lengthofarr(arr)-1;

	while(i<j){
	if(arr[i]==arr[j]){
		i++;
		j--;
	}
	else{
		return false;
	}
}
return true;
}
// append 
// i/p:A-->cat B-->ratt

// o/p A-->catratt  B -->ratt
void append(char b[100],char a[100]){
	int i=0;
	int j=lengthofarr(a);//3
	while(i<=lengthofarr(b)){
	a[j]=b[i];
	i++;
	j++;
}


}
int main(){

		char a[100];
	cin.getline(a,100);//cat\0
		char b[100];
	cin.getline(b,100);//ratt\0

	append(b,a);

	cout<<a<<endl;
	cout<<b<<endl;

	// char a[100];
	// cin.getline(arr,100);//he ll\0

	// cout<<lengthofarr(arr)<<endl;

	
	return 0;
}