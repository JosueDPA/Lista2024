#include"Lista.hpp"

int main() {
	/*
	Lista L1(2);
	L1.pushFront(6);
	L1.pushFront(8);
	L1.pushFront(50);
	L1.pushBack(5);
	L1.imprimir();
	*/
	Lista L;
	L.pushFront(4);
	L.pushBack(5);
	L.imprimir();
	cout<<endl;
	L.popBack();
	L.imprimir();
	return 0;
}