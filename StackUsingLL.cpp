#include <iostream>
using namespace std;

struct node {
	int data;
	node *next;
};

node *top=NULL;

void push (int newdata){
	node *newnode=new node;
	newnode->data=newdata;
	newnode->next=top;
	top=newnode;
}

void pop () {
	node *hapus;
	if (top==NULL){
		return ;
	}
	hapus=top;
	top=top->next;
	delete hapus;
}

bool isEmpty () {
	return (top==NULL);
}

void printStack () {
	node *bantu=top;
	if (!isEmpty()){
		do {
		cout<<bantu->data<<endl;
		bantu=bantu->next;
	}
	while (bantu!=NULL);
	}
	else {
		cout<<"Stack Kosong"<<endl;
	}
}
