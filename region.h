#ifndef REGION_H
#define REGION_H


#include <iostream>
class Region{
	private:
		std::string code;
  		int size;
  	public:
		Region(); //Default constructor
    		Region(std::string code); // constructor
    		~Region(); // Destructor
		void setCode(std::string code); //Set codigo
    		std::string getCode(); // GET codigo
   		int getSize(); //GET cantidad de registros
    		void setSize(int size); //SET cantidad de registros
};
#endif
