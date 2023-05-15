#include "MASTER.h"
#include "tools.h"
//This file contains immediate addition and storing at accumulator 
void ADI(string arg, string registers[],bool flag[]){

	int length = arg.length();
	if(length == 2){
	
		if(validityData(arg)){
			
			//Immediate addition and storing in accumulator
			registers[0] = hexAdd(arg,registers[0],flag,true);
		}
		else{
			//Invalid data content
			cout<<"Error: "<<arg<<"\nInvalid data content\nThe program will quit\n";
			exit(0);
			
		}
	}
	else{
		//Invalid data size
		cout<<"Error: "<<arg<<"\nInvalid data size\nThe program will quit\n";
		exit(0);
		
	}
	
}
