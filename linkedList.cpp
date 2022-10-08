#include "linkedList.h"
#include "region.h"
#include "node.h"
#include <iostream>

LinkedList::LinkedList(){
  first = nullptr;
}
//GETS -> Obtiene el primer elemento de la lista
Node* LinkedList::getFirst(){
	return first;
}
//Agrega un nodo en el primer lugar de la lista
void LinkedList::add(Region* region){
  Node* node = new Node(region);
  node->setNext(first);
  first = node;
}
//Le suma uno a la cantidad de registros de la respectiva region
void LinkedList::sum(Node* node){
	node->getRegion()->setSize(node->getRegion()->getSize()+1);
	//std::cout << region.getSize() << std::endl;
}
// Ordena la lista de menor a mayor en cuanto a codigo de region
void LinkedList::sort(){
    
        //Node current will point to head  
        Node* current = first;
	Node* index = nullptr;  
	std::string tempCode = "";
       	int tempRegisters = 0 ;	
          
        
       	while(current != nullptr) {  
                //Node index will point to node next to current  
                index = current->getNext();  
                while(index != nullptr) {  
                    //If current node's data is greater than index's node data, swap the data between them  
                    if(std::stoi(current->getRegion()->getCode()) > std::stoi(index->getRegion()->getCode())) {  
                        tempCode = current->getRegion()->getCode();
		      	tempRegisters = current->getRegion()->getSize();

                        current->getRegion()->setCode(index->getRegion()->getCode());
		      	current->getRegion()->setSize(index->getRegion()->getSize());

			index->getRegion()->setCode(tempCode);	
                        index->getRegion()->setSize(tempRegisters);
                    }  
                    index = index->getNext();  
                }  
                current = current->getNext();  
	}      
          
     
}
//No implementado
Node* LinkedList::swap(Node* ptr1, Node* ptr2){
  Node* aux = ptr2->getNext();
  ptr2->setNext(ptr1);
  ptr1->setNext(aux);
  return ptr2;
}
//Devuelve un nodo en caso de existir 
Node* LinkedList::exists(std::string code){
  Node* actual = first;
  while(actual!=nullptr){
    if (actual->getRegion()->getCode()==code) return actual;
    actual = actual->getNext();
  }
  return nullptr;

}
//Destructor de la clase
LinkedList::~LinkedList(){

}
