#ifndef SYSTEM_H
#define SYSTEM_H
#include "linkedList.h"
#include <iostream>
class System {
	private:
		LinkedList list;
	public:
		System(LinkedList list); //CONSTRUCTOR
		~System(); //DESTRUCTOR
		void readFile(std::string fileName); //Dado el path al dataset, lo procesa e ingresa los resultados a la lista
		void print();//Imprime la lista, antes ordenandola por los códigos de regiones de menor a mayor
		void deleteList();//Elimina todos los nodos, regiones de la lista, a fin de evitar leaks de memoria
};

#endif
