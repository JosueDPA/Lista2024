#include"Vector.hpp"





int main() {
	Vector V(4);
	V.pushFront(5);
	V.pushFront(6);
	V.pushBack(56);
	V.popBack();
	V.imprimir();
	return 0;
}