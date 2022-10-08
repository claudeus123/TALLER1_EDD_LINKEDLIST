#ifndef NODE_H
#define NODE_H
#include "region.h"

class Node{
	private:
  		Node* next;
  		Region* region;
  
	public:
		Node();
    		Node(Region* region);
    		~Node();
    		Region* getRegion();
    		Node* getNext();
    		void setNext(Node* next);
};
#endif
