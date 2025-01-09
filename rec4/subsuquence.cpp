#include<iostream>
using namespace std;
// int c=0;
void subsequence(char inp[100],int i,char out[100],int j,int &c){

	if(inp[i]=='\0'){
		out[j]='\0';

		cout<<out<<endl;
		c++;
		return;
	}



	subsequence(inp,i+1,out,j,c);
	out[j]=inp[i];
	subsequence(inp,i+1,out,j+1,c);

}
int main(){

	char inp[100];
	cin.getline(inp,100);//"abc"

	char out[100];
	int c=0;
	subsequence(inp,0,out,0,c);
	cout<<c<<endl;
	

	return 0;
}