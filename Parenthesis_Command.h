// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#ifndef _PARENTHESIS_COMMAND_H
#define _PARENTHESIS_COMMAND_H

#include "Command.h"

// Dr. Ryan: Parenthesis Command should not inherit from Binary Command as it is not a type of Binary Command.
// Fixed: Changed inheritance to Command
class Parenthesis_Command : public Command 
{
	public:
		Parenthesis_Command(void);
		virtual ~Parenthesis_Command(void);
    
		virtual int priority();
		virtual bool execute(Stack<int> &s);
		// Dr. Ryan: Parenthesis Command should not inherit from Binary Command as it is not a type of Binary Command.
		// Fixed: Changed inheritance and removed evaluate function
};
#endif