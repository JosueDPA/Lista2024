#include"Lista.hpp"


Lista::Lista(){
	this->head=0;
}
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
	}else{
		head=NuevoNodo;
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

int Lista::popFront(){
	int dato=0;
	if(head!=NULL){
		Nodo *aux=head;
		dato=this->head->key;
	    head=head->next;
	    delete aux;
	    return dato;
	}else{
		cout<<"la lista esta vacia"<<endl;
		return dato;
	}
	
}
int Lista::popBack(){
	int dato=0;
	if(head!=NULL){
		Nodo *iter;
	    iter=head;
	    while(iter->next->next!=NULL){
		  iter=iter->next;
	    }
	    Nodo*aux=iter->next;
	    iter->next=NULL;
	    delete aux;
	    return dato;
	}else{
		cout<<"la lista esta vacia"<<endl;
		return dato;
	}
}
