// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#ifndef _MODULUS_COMMAND_H
#define _MODULUS_COMMAND_H

#include "Binary_Command.h"

class Modulus_Command : public Binary_Command 
{
	public:
		Modulus_Command(void);
		virtual ~Modulus_Command(void);
    
		virtual int priority();
		virtual int evaluate(int n1, int n2);
};
#endif