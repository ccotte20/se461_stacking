// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte
#ifndef _COMMAND_H_
#define _COMMAND_H_

#include "Stack.h"

public Command
{
	Command(void);
	
	virtual ~command() = 0;
	
	virtual int priority() = 0;
	
	virtual void execute(Stack<int> & s) = 0;
};
#endif