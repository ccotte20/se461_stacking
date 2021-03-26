// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#ifndef _DIVIDE_COMMAND_H
#define _DIVIDE_COMMAND_H

#include "Binary_Command.h"

class Divide_Command : public Binary_Command 
{
	public:
		Divide_Command(void);
		virtual ~Divide_Command(void);
    
		virtual int priority();
		virtual int evaluate(int n1, int n2);
};
#endif