#include"Lista.hpp"

Lista::Lista(){
	this->head=NULL;
	this->cola=NULL;
}

Lista::Lista(int key){
	Nodo *NuevoNodo=new Nodo(key);
	this->head=NuevoNodo;
	this->cola=NuevoNodo;
}

void Lista::pushFront(int key){
	Nodo *NuevoNodo=new Nodo(key);
	if(this->head==NULL){
		this->head=NuevoNodo;
		this->cola=NuevoNodo;
	}else{
		this->head->back=NuevoNodo;
		NuevoNodo->next=head;
		head=NuevoNodo;
	}
}
void Lista::pushBack(int key){
	Nodo *NuevoNodo=new Nodo(key);
	if(this->head==NULL){
		this->head=NuevoNodo;
		this->cola=NuevoNodo;
	}else{
		this->cola->next=NuevoNodo;
		NuevoNodo->back=this->cola;
		this->cola=NuevoNodo;
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
	   dato=head->key;
	   Nodo *aux=head;
	   head->next->back=NULL;
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
	   dato=cola->key;
	   Nodo *aux=cola;
	   cola->back->next=NULL;
	   cola=cola->back;
	   delete aux;
	   return dato;
	}else{
		cout<<"la lista esta vacia"<<endl;
		return dato;
	}
}