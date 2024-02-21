#include"Lista.hpp"



Lista::Lista(int key){
	Nodo *NuevoNodo=new Nodo(key);
	this->head=NuevoNodo;
}

void Lista::pushFront(int key){
	Nodo *NuevoNodo=new Nodo(key);
	NuevoNodo->next=head;
    head=NuevoNodo;
}
void Lista::pushBack(int key){
	Nodo *NuevoNodo=new Nodo(key);
	Nodo *iter=head;
	if(head!=NULL){
		while(iter->next!=NULL){
		iter=iter->next;
	    }
	    iter->next=NuevoNodo;
	}
	
}

void Lista::imprimir(){
    Nodo *iter;
	iter=head;
	while(iter!=NULL){
		cout<<iter->key<<endl;
		iter=iter->next;
	}
}
