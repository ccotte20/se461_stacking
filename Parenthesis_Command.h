// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#ifndef _PARENTHESIS_COMMAND_H
#define _PARENTHESIS_COMMAND_H

#include "Binary_Command.h"

// Dr. Ryan: Parenthesis Command should not inherit from Binary Command as it is not a type of Binary Command.
class Parenthesis_Command : public Binary_Command 
{
	public:
		Parenthesis_Command(void);
		virtual ~Parenthesis_Command(void);
    
		virtual int priority();
		virtual bool execute(Stack<int> &s);
		// Dr. Ryan: Parenthesis Command should not inherit from Binary Command as it is not a type of Binary Command.
		virtual int evaluate(int n1, int n2);
};
#endif