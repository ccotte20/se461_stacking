// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte
#include "Add_Command.h"


Add_Command::Add_Command(void)
{
    
}


Add_Command::~Add_Command(void)
{
    
}

int Add_Command::priority()
{
    	return 1;
}

int Add_Command::evaluate(int n1,int n2)
{
    
	return (n1 + n2);
}