#include "system.h"
#include "node.h"
#include "linkedList.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string.h>
#include "region.h"

System::System(LinkedList list){
	this->list = list;
}
System::~System(){}
void System::readFile(std::string fileName){
	std::ifstream myFileStream(fileName);
	std::string code;
	std::string line;
	
	getline(myFileStream,line);
	while(getline(myFileStream,line)){
		std::stringstream ss(line);
		getline(ss,code,';');

        	Node* node = list.exists(code);
		//std::cout << node << std::endl;
		if (node != nullptr){
            		list.sum(node);
        	} else {
            		Region* region = new Region(code);
            		list.add(region);
        	
		}
		//std::cout << line << std::endl;
	}	
	myFileStream.close();
}

void System::print(){
    list.sort();	
    Node* current = list.getFirst();
    while (current != nullptr){
        std::cout << current->getRegion()->getCode() << ": " << current->getRegion()->getSize() << " registros" << std::endl;
        current = current->getNext();
    }
}

void System::deleteList(){
    Node* current = list.getFirst();
    Node* del = nullptr;

    //BORRAR REGIONES TAMBIEN 
    while (current != nullptr){
        del = current;
        current = current->getNext();
        delete del;
    }
}

