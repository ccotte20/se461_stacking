// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte
#include "Divide_Command.h"


Divide_Command::Divide_Command(void)
{
    
}


Divide_Command::~Divide_Command(void)
{
    
}

int Divide_Command::priority()
{
    	return 2;
}

int Divide_Command::evaluate(int n1,int n2)
{
	if(n2==0)
	{
		std::cout<<"Divide by 0"<<endl;
		throw std::logic_error("Divide by 0");
	}
	return (n1 / n2);
}