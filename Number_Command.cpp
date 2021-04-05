// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte
#include "Number_Command.h"

Number_Command::Number_Command(void)
{
	
}

Number_Command::Number_Command(int n) : n_(n)
{
    
}


Number_Command::~Number_Command(void)
{
    
}

bool Number_Command::execute(Stack<int> &s)
{
	s.push(n_);
	
	return true;
}

int Number_Command::priority()
{
    	return -1;
}

// Dr. Ryan: Why would the Number Command have an evaluate method?
// Fixed: Removed Evaluate Command