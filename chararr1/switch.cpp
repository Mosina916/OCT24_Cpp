#include<iostream>
#include<queue>
using namespace std;

int main(){

	// switch -->if else if else if ...else
	int age;
	cin>>age;
	if(age==10){
		cout<<"i will gift you a toy"<<endl;
	}
	else if(age==20){
		cout<<"i will gift you a phone"<<endl;
	}
	else if(age==30){
		cout<<"i will gift you iphone"<<endl;
	}
	else if(age==40){
		cout<<"i will gift you a bike"<<endl;
	}
	else if(age==50){
		cout<<"i will gift you a car"<<endl;
	}
	// else{
	// 	cout<<"i will gift you a bed"<<endl;
	// }

	// switch(vaible){
	// 	case :task
	// }


	switch(age){
		case 10:cout<<"i will gift you a toy"<<endl;
		break;
		case 20:cout<<"i will gift you a phone"<<endl;
		break;
		case 30:cout<<"i will gift you a iphone"<<endl;
		break;
		case 40:cout<<"i will gift you a bike"<<endl;
		break;
		case 50:cout<<"i will gift you a car"<<endl;
		break;
		default:cout<<"i will gift you a bed"<<endl;
	}


	return 0;
}