#include"Nodo.hpp"


#ifndef LISTA
#define LISTA

class Lista{
	public:
		Lista(int );
		void pushFront(int );
		void pushBack(int );
		void imprimir();
	private:
		Nodo *head;
};
#endif