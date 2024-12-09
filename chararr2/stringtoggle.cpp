
#include<iostream>
using namespace std;
int lengthofarr(char arr[100]){

	int c=0;

	int i=0;
	while(arr[i]!='\0'){
	c++;
	i++;
}
return c;
}
void toggle(char arr[100]){//ABc
	for(int i=0;i<=lengthofarr(arr)-1;i++){
	char ch=arr[i];//'c'
	if(isupper(ch)){
		arr[i]=ch+32;//'abC\0'
		
	}
	else{
		arr[i]=ch-32;

	}
}
}

int main(){
	char arr[100];
	cin.getline(arr,100);//abC\0
	toggle(arr);

	cout<<arr<<endl;
	
	return 0;
}

