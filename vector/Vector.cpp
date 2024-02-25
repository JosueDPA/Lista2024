#include"Vector.hpp"


Vector::Vector(int tam){
	this->tam=tam;
	this->ARR=new int(tam);
	this->can=0;
}

void Vector::pushFront(int dato){
	if(this->can==this->tam){
		cout<<"el vector esta lleno, elimine un elemento para desocupar espacio"<<endl;
	}else{
		int *ARR1=new int(this->tam);// se hace memoria dinamica del mismo tamaño y ARR apuntara a este cuando finalice
		int *aux;
		aux=this->ARR;
		ARR1[0]=dato;
		for(int i=1;i<=this->can;i++){
			ARR1[i]=ARR[i-1];
		}
		this->can=this->can+1;
		this->ARR=ARR1;
		delete aux;
		
	}
}
void Vector::pushBack(int dato){
	if(this->can==this->tam){
		cout<<"el vector esta lleno, elimine un elemento para desocupar espacio"<<endl;
	}else{
		ARR[this->can]=dato;
		this->can=this->can+1;
	}
}
int Vector::popFront(){
	int dato=0;
	if(this->can==0){
		cout<<"el vector esta vacio"<<endl;
		return dato;
	}else{
		int *ARR1=new int(this->tam);// se hace memoria dinamica del mismo tamaño y ARR apuntara a este cuando finalice
		int *aux;
		aux=ARR;
		dato=ARR[0];
		for(int i=0;i<this->can-1;i++){
			ARR1[i]=ARR[i+1];
		}
		this->can=this->can-1;
		this->ARR=ARR1;
		delete aux;
		return dato;
	}
}
int Vector::popBack(){
	int dato=0;
	if(this->can==0){
		cout<<"el vector esta vacio"<<endl;
		return dato;
	}else{
		dato=ARR[this->can-1];
		ARR[this->can-1]=0;
		this->can=this->can-1;
		return dato;
	}
}
void Vector::imprimir(){
	if(this->can==0){
		cout<<"el vector esta vacio"<<endl;
	}else{
		for(int i=0;i<this->can;i++){
			cout<<ARR[i]<<endl;
		}
	}
}