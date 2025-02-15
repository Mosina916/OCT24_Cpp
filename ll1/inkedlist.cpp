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

void insertathead(node*&head,node*&tail,int d){
	// agar pehla nodeinsert ho raha heda tail donu chage hoge

	if(head==NULL and tail==NULL){
		node*ptr=new node(d);
		head=ptr;
		tail=ptr;

	}
	else{

	// node x(d);
	// 
	node*ptr=new node(d);
	ptr->next=head;
	head=ptr;
}

}


void insertattail(node*&head,node*&tail,int d){
	// agar pehla nodeinsert ho raha heda tail donu chage hoge

	if(head==NULL and tail==NULL){
		node*ptr=new node(d);
		head=ptr;
		tail=ptr;

	}
	else{
		node*ptr=new node(d);
		tail->next=ptr;
		tail=ptr;
	
}

}

void printll(node*head){
	node*temp=head;//700
	while(temp!=NULL){
	cout<<temp->data<<"-->";
	temp=temp->next;
}
}

int lengthllrec(node*head){
	if(head==NULL){
		return 0;
	}


	return 1+lengthllrec(head->next);
}

int lengthll(node*head){
	node*temp=head;//700
	int c=0;
	while(temp!=NULL){
		c++;
	temp=temp->next;
}

return c;
}

//   	  head
//   temp=null
// // 1-->7-->8-->5-->4-->
void deleteathead(node*&head,node*&tail){
	// jab khali hai ll
	if(head==NULL and tail==NULL){
		return;
	}
	// single node
	else if(head->next==NULL){
		delete head;
		head=NULL;
		tail=NULL;
	}
	// multiple nodes
	else{

	node*temp=head;
	head=head->next;
	delete temp;
	temp=NULL;
}

}


void deleteattail(node*&head,node*&tail){
	// jab khali hai ll
	if(head==NULL and tail==NULL){
		return;
	}
	// single node
	else if(head->next==NULL){
		delete head;
		head=NULL;
		tail=NULL;
	}
	// multiple nodes
	else{
		node* temp=head;
		while(temp->next!=tail){
		temp=temp->next;
	}
	delete tail;
	tail=temp;
	tail->next=NULL;



}

}

void insertatanypositioninbtween(node*&head,node*&tail,int pos,int d){
	if(pos==0){
		insertathead(head,tail,d);
	}
	else if(pos>=lengthll(head)){
		insertattail(head,tail,d);
	}
	else{
		node*temp=head;

		for(int jump=1;jump<=pos-1;jump++){
		temp=temp->next;
	}
		node*ptr=new node(d);
		ptr->next=temp->next;
		temp->next=ptr;

	}


}


// search(node*head,int key){
	
// }



node* midpoint(node*head){
	node*p1=head;
	node*p2=head;

	while(p1->next!=NULL){
	p1=p1->next->next;
	p2=p2->next;
}

return p2;

}

int main(){
	node*head=NULL;
	node*tail=NULL;


	insertathead(head,tail,5);
	insertathead(head,tail,8);
	insertathead(head,tail,7);
	insertathead(head,tail,1);

	insertathead(head,tail,16);
	node*a=midpoint(head);
	cout<<a->data<<endl;


	return 0;

}