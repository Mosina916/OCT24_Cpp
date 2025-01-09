#include<iostream>
using namespace std;
// string outputs[100000];
int i=0;
void permtation(char arr[100],int i){
	// bad\se case
	if(arr[i]=='\0'){
		
		return;
	}
	// rec case
	for(int j=i;arr[j]!='\0';j++){
	swap(arr[i],arr[j]);
	permtation(arr,i+1);
	swap(arr[i],arr[j]);//backteacking


}

}

int main(){


	char arr[100];
	cin.getline(arr,100);//abc
	permtation(arr,0);


	return 0;
}