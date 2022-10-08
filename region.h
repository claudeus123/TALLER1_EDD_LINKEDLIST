#ifndef REGION_H
#define REGION_H


#include <iostream>
class Region{
	private:
		std::string code;
  		int size;
  	public:
		Region();
    		Region(std::string code);
    		~Region();
		void setCode(std::string code);
    		std::string getCode();
   		int getSize();
    		void setSize(int size);
};
#endif
