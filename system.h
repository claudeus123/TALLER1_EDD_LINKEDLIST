#ifndef SYSTEM_H
#define SYSTEM_H
#include "linkedList.h"
#include <iostream>
class System {
	private:
		LinkedList list;
	public:
		System(LinkedList list);
		~System();
		void readFile(std::string fileName);
		void print();
		void deleteList();
};

#endif
