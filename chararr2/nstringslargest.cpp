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

	int n;
	cin>>n;//4
	cin.ignore();
	char abhtakkilargestarr[100];

	char arr[100];
	cin.getline(arr,100);//board\0
	int abhitakkimaxlen=lengthofarr(arr);//5
	copyarrb(arr,abhtakkilargestarr);


	for(int i=1;i<=n-1;i++){
	cin.getline(arr,100);//elephant\0
	if(lengthofarr(arr)>abhitakkimaxlen){//8>6
		copyarrb(arr,abhtakkilargestarr);
		abhitakkimaxlen=lengthofarr(arr);//6

	}
}

cout<<abhtakkilargestarr<<endl;
cout<<abhitakkimaxlen<<endl;


	
	return 0;
}