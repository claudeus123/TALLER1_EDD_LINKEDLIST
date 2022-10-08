#include <iostream>
#include "region.h"

Region::Region(){
	code = "defecto";
	size = 0;
}

Region::Region(std::string code){
  this->code = code;
  size = 0;
}
std::string Region::getCode(){
  return code;
}
int Region::getSize(){
  return size;
}
void Region::setSize(int size){
  this->size = size;
}

void Region::setCode(std::string code){
	this->code = code;
}	

Region::~Region(){}
