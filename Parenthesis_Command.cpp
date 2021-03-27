// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte
#include "Parenthesis_Command.h"


Parenthesis_Command::Parenthesis_Command(void)
{
    
}


Parenthesis_Command::~Parenthesis_Command(void)
{
    
}

int Parenthesis_Command::priority()
{
    return 0;
}

bool Parenthesis_Command::execute(Stack<int> &s)
{
	return true;
}

// Dr. Ryan: Does a parenthesis really need an evaluate?
int Parenthesis_Command::evaluate(int n1,int n2)
{
	return (n1);
}