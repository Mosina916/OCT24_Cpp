#include <iostream>
#include <cmath>
using namespace std;
class x{ 
public:
	string name;
	string col;
	int seat;
	x(){

		cout<<"coding"<<endl;

	}

	x(string name,string c,int s){
		this->name=name;
		col=c;
		seat=s;

	}

	void setter(){
		cin>>name>>col>>seat;
	}
	
	void getter(){
		cout<<name<<" "<<col<<" "<<seat<<endl;
	}
// dustrucor
	~x(){

	}
};
int main(){
	x a;
	a.setter();
	a.getter();
	// a.name="bmw";
	// a.col="white";
	// a.seat=4;

	x b;
	b.name="anc";
	b.name="auc";
	b.col="wh";
	b.seat=6;
	b.getter();

	x c("audi","white",5);
	c.getter();


	// cout<<b.name<<endl;



	
	
	

	return 0;
}