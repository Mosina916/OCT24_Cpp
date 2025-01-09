#include<iostream>
using namespace std;
int convert(string s,int l){
	// b case 
	if(l==0){
		return 0;

	}

	// rec case
	char ch=s[l-1];//'8'
	int x=ch-'0';//'8'-'0'-->8
	return convert(s,l-1)*10+x;//"5463"-->54638
}
int main(){
	// "54638"-->54638

	string s;
	getline(cin,s);

	int l=s.length();//5
	cout<<convert(s,l)<<endl;


	
	return 0;
}