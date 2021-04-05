// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte
#ifndef _COMMAND_H_
#define _COMMAND_H_

#include "Stack.h"

class Command
{
	public:
		Command(void) {}
	
		// Dr. Ryan: Why the lower case 'c' here?
		// Fixed: Changed Case
		virtual ~Command() {}
	
		virtual int priority() = 0;
	
		virtual bool execute(Stack<int> & s) = 0;
};
#endif