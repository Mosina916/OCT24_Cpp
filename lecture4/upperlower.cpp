#include <iostream>
using namespace std;

int main(){
	char ch;
	cin>>ch;
	// if(ch>='A' and ch<='Z'){
	// 	cout<<"UPPERCASe"<<endl;
	// }
	// else if(ch>='a' and ch<='z'){
	// 	cout<<"lowercase"<<endl;
	// }
	// else{
	// 	cout<<"some other charater"<<endl;

	// }


	// if(ch>=65 and ch<=90){
	// 	cout<<"UPPERCASe"<<endl;
	// }
	// else if(ch>=97 and ch<=122){
	// 	cout<<"lowercase"<<endl;
	// }
	// else{
	// 	cout<<"some other charater"<<endl;

	// }


		if(isupper(ch)){
		cout<<"UPPERCASe"<<endl;
	}
	else if(islower(ch)){
		cout<<"lowercase"<<endl;
	}
	else{
		cout<<"some other charater"<<endl;

	}





	
	


	return 0;
}