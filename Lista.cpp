#include"Lista.hpp"


Lista::Lista(){
	this->head=NULL;
}
Lista::Lista(int key){
	Nodo *NuevoNodo=new Nodo(key);
	this->head=NuevoNodo;
	this->cola=NuevoNodo;
}

void Lista::pushFront(int key){
	Nodo *NuevoNodo=new Nodo(key);
	if(head!=NULL){
	   Nodo *NuevoNodo=new Nodo(key);
	   NuevoNodo->next=head;
       head=NuevoNodo;	
	}else{
		this->cola=NuevoNodo;
		this->head=NuevoNodo;
	}
	
}
void Lista::pushBack(int key){
	Nodo *NuevoNodo=new Nodo(key);
	    if(head!=NULL){
	    	Nodo *iter=head;
		   while(iter->next!=NULL){
		      iter=iter->next;
	       }
	       iter->next=NuevoNodo;
	       cola=NuevoNodo;
	    }else{
	    	this->cola=NuevoNodo;
		    this->head=NuevoNodo;
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
		dato=head->key;
		this->head=head->next;
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
		Nodo *aux;
		Nodo *iter=head;
		while(iter->next->next!=NULL){
		  iter=iter->next;
	    }
	    aux=iter->next;
	    dato=iter->next->key;
	    iter->next=NULL;
	    cola=iter;
	    delete aux;
	    return dato;
	}else{
		cout<<"la lista esta vacia"<<endl;
		return dato;
	}
}
