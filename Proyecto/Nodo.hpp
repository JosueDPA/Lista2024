#include<iostream>
using std::cin;
using std::cout;
using std::endl;

#ifndef NODO
#define NODO



class Nodo{
   public:
     Nodo(int );
     int key;
     Nodo *next;
};
#endif