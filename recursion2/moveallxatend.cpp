#include<iostream>
using namespace std;
string moveallxatend(string s){
	if(s.length()==0){
		return "";
	}

	char ch=s[0];//'a'
	// string h=moveallxatend(s.substr(1));//xbdxcxg--abdcgxxx
	if(ch=='x'){
		return moveallxatend(s.substr(1))+ch;

	}
	else{
		return ch+moveallxatend(s.substr(1));


	}

}
int main(){


	string s;
	getline(cin,s);//s-->axbdxcxg
	cout<<moveallxatend(s)<<endl;

	// s.substr(index);

	// s.substr(1);-->rec  xbdxcxg-->abdcgxxx
	// l=8
	// // s-->-->'a'+bdcgxxx

	// // xhbdxcxg-->hbdcgxxx
	// hbdxcxg-->hbdcgxxx
	
	return 0;
}