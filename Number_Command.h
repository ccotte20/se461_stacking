// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#ifndef _NUMBER_COMMAND_H
#define _NUMBER_COMMAND_H

#include "Binary_Command.h"

// Dr. Ryan: Number Command should not inherit from Binary Command as it is not a type of Binary Command.
class Number_Command : public Binary_Command 
{
	public:
		Number_Command(int n);
		virtual ~Number_Command(void);
    
		virtual bool execute(Stack<int> &s);
		virtual int priority();
		// Dr. Ryan: Number Command should not inherit from Binary Command as it is not a type of Binary Command.
		virtual int evaluate(int n1, int n2);
	
	private:
		Number_Command(void);
		int n_;
};
#endif