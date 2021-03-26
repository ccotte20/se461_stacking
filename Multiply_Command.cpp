// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte
#include "Multiply_Command.h"


Multiply_Command::Multiply_Command(void)
{
    
}


Multiply_Command::~Multiply_Command(void)
{
    
}

int Multiply_Command::priority()
{
    return 2;
}

int Multiply_Command::evaluate(int n1,int n2)
{
	return (n1 * n2);
}