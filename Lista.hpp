#include"Nodo.hpp"


#ifndef LISTA
#define LISTA

class Lista{
	public:
		Lista();
		Lista(int );
		void pushFront(int );
		void pushBack(int );
		void imprimir();
		int popFront();
		int popBack();
	private:
		Nodo *head;
		Nodo *cola;
};
#endif