// rpioippigvd-->r3.14oip3.14gvd
// piiojpipiins-->3.14ioj3.143.14ins


// ""-->""
#include<iostream>
using namespace std;
string f(string s){
if(s.length()<=1){
	return s;
}

string x=s.substr(0,2);//-->"pi"
if(x!="pi"){
return s[0]+f(s.substr(1));
	
}
else{
	return "3.14"+ f(s.substr(2));
}
}
int main(){
	string s;
	getline(cin,s);
	cout<<f(s)<<endl;


	return 0;
}