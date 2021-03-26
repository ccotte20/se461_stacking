// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#ifndef _ADD_COMMAND_H
#define _ADD_COMMAND_H

#include "Binary_Command.h"

class Add_Command : public Binary_Command 
{
	public:
		Add_Command(void);
		virtual ~Add_Command(void);
    
		virtual int priority();
		virtual int evaluate(int n1, int n2);
};
#endif