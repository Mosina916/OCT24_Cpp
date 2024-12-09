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

// oe llh\0 //i-->3 j-->2
void reverse(char arr[100]){
	int i=0;
	int j=lengthofarr(arr)-1;
	while(i<j){
	swap(arr[i],arr[j]);
	i++;
	j--;
}

}
int main(){

	char a[100];
	cin.getline(a,100);//hel lo\0-->ol leh\0
	reverse(a);
	cout<<a<<endl;


	
	return 0;
}