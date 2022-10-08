#include <iostream>
#include "linkedList.h"
#include "node.h"
#include "region.h"
#include "system.h"

using namespace std;

int main() {
	LinkedList regionList = LinkedList();
	System system = System(regionList);
	system.readFile("Microdato_Censo2017-Personas.csv");
	system.print();
	system.deleteList();
}
