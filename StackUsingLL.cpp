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

int main (){
	int n, pilih,nilai;
	char balik;
	do{
	cout<<"======================================================================================="<<endl;
	cout<<"-----MENU-----"<<endl<<"1. Push Stack"<<endl<<"2. Pop Stack"<<endl<<"3. Tampilkan Stack"<<endl<<"Pilihan : ";
	cin>>pilih;
	switch (pilih){
		case 1:
			cout<<"Masukan banyaknya stack yg ingin di-push = ";
			cin>>n;
			for (int i=0;i<n;i++){
				cout<<"Masukan nilai ke-"<<i+1<<" = ";
				cin>>nilai;
				push(nilai);
			}
			break;
		case 2:
			cout<<"Masukan banyaknya stack yg ingin di-pop = ";
			cin>>n;
			for (int j=0;j<n;j++){
				pop();
			}
			break;
		case 3:
			printStack();
			break;
		default:
			cout<<"Pilihan tidak tersedia"<<endl;
			break;
	}
	cout<<"======================================================================================="<<endl;
	cout<<"Ketik 'y/Y' untuk kembali ke menu"<<endl;
	cin>>balik;
	}while (balik=='y'||'Y');
	
	return 0;
}
