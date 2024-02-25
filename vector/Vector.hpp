#include<iostream>
using std::cin;
using std::cout;
using std::endl;

#ifndef VECTOR
#define VECTOR

class Vector{
    public:
    	
    	Vector(int );
    	void imprimir();
    	void pushFront(int);
    	void pushBack(int);
    	int popFront();
    	int popBack();
    
    private:
        int *ARR;//arreglo donde estaran los elemnentos
        int tam;//tamaño del vector
        int can;//cantidad de elementos del vector;
        
};
#endif