// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte


#ifndef _BINARY_COMMMAND_
#define _BINARY_COMMMAND_

#include "Command.h"


class Binary_Command: public Command
{
	
    public:
		Binary_Command();
		
		virtual ~Binary_Command();
    
		virtual bool execute(Stack <int> &s);
    
		virtual int evaluate (int n1,int n2)=0;
    
        virtual int priority()=0;
};

#endif