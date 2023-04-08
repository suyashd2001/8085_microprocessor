#include<bits/stdc++.h>

using namespace std;

int main()
{
    // can use key, value pair so that we can store address as well as instruction in the same memory location and it will be
    // easier to run the program instead of just using a simple ordered or unordered map.
    unordered_map<int>mp;                           
    char ch,mem,cmd;
    cout<<" A = Assembler"<<endl;               // to access the assembler mode for writing instructions
    cout<<" D = Dissembler" <<endl;             // to acess dssembler mode
    cin>>ch;
    if(ch.upper()=='A')                             // accessing then assembler mode
    {
        do{
            cout<<" RAM = " ;
            cin>>mem;                                   // entering the starting memory address
            cout<< mem << "   ";
            cin>>cmd;                                   // entering the command 
            // after this we have to search other files to find the given instructions and implement it.
        }while ((!='D'));   //  for resetting command                                                    
    }
    else if(ch.upper()=='D'){   //  starting the dissemble to see the data entered

    }
}