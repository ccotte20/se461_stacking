// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#ifndef _MULTIPLY_COMMAND_H
#define _MULTIPLY_COMMAND_H

#include "Binary_Command.h"

class Multiply_Command : public Binary_Command 
{
	public:
		Multiply_Command(void);
		virtual ~Multiply_Command(void);
    
		virtual int priority();
		virtual int evaluate(int n1, int n2);
};
#endif