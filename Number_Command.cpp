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

int Number_Command::evaluate(int n1,int n2)
{
	return (n1 + n2);
}