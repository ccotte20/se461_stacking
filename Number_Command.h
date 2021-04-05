// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#ifndef _NUMBER_COMMAND_H
#define _NUMBER_COMMAND_H

#include "Command.h"

// Dr. Ryan: Number Command should not inherit from Binary Command as it is not a type of Binary Command.
// Fixed: Inherits from Command
class Number_Command : public Command
{
	public:
		Number_Command(int n);
		virtual ~Number_Command(void);
    
		virtual bool execute(Stack<int> &s);
		virtual int priority();
		// Dr. Ryan: Number Command should not inherit from Binary Command as it is not a type of Binary Command.
		// Fixed: Removed inheritance and evaluate method
	
	private:
		Number_Command(void);
		int n_;
};
#endif