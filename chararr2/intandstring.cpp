#include<iostream>
using namespace std;

int main(){

	int n;
	cin>>n;
	cin.ignore();//1char at a time ignore
		// cin.ignore();
	char arr[100];
	cin.getline(arr,100);

	cout<<n<<endl;
	cout<<arr<<endl;


	

	
	return 0;
}