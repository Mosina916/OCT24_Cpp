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
void copyarrb(char arr[100],char b[100]){
	int i=0;
	int j=0;
	while(i<=lengthofarr(arr)){
	b[j]=arr[i];
	i++;
	j++;
}

}
int main(){

	char arr[100];
	cin.getline(arr,100);//he ll\0
	char b[100];
	copyarrb(arr,b);

	cout<<b<<endl;
	

	
	return 0;
}