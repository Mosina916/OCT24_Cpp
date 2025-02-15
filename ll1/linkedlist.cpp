#include <iostream>
using namespace std;
class node{
public:
	int data;
	node*next;
	node(int d){
		data=d;
		next=NULL;
	}
};
int main(){
	node x(3);
	node y(4);
	x.next=&y;

	cout<<x.data<<endl;//3
	// cout<<(*x.next).data<<endl;

	cout<<(x.next)->data<<endl;





	return 0;
}