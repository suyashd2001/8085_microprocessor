#include "MASTER.h"
#include "tools.h"
//This file contains the ADD command working 
void ADD(string arg1,string registers[],bool flag[],map<string,string>&memory){
	
	int length=arg1.length();
	if(length == 1){
		
		if(validityRegisters(arg1) || validityRegisterPair(arg1)){
			
			if(arg1 != "M"){
			
				int registerID = registerNumber(arg1);
				
				registers[0] = hexAdd(registers[registerID],registers[0],flag,true);
				
			}
			else{                         
		
				/*Fetches data of HL pair*/
				string address = "";
				address = address + registers[5] + registers[6];
				if(address >= "0000" && address <= "FFFF"){
					registers[0] = hexAdd(memory[address],registers[0],flag,true);				 
				}
				else{
					//If the address is out of bound, then error
					cout<<"Error: "<<arg1<<"\n";
					cout<<"Address out of bounds\nThe program will quit\n";
					exit(0);
					
				}						
			}
		}
		else{
			//Invalid register error
				
				cout<<"Error: "<<arg1<<"\nInvalid register details\nThe program will quit\n";
				exit(0);
			
		}
	}
	else{
		
		cout<<"Error: "<<arg1<<"\nInvalid arguments\nThe program will quit\n";
		exit(0);
		
	}
}
