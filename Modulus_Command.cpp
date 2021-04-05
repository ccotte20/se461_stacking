// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte
#include "Modulus_Command.h"


Modulus_Command::Modulus_Command(void)
{
    
}


Modulus_Command::~Modulus_Command(void)
{
    
}

int Modulus_Command::priority()
{
    	return 2;
}

int Modulus_Command::evaluate(int n1,int n2)
{
	if(n2==0)
	{
		std::cout<<"Divide by 0"<<std::endl;
		throw std::logic_error("Divide by 0");
	}
	return (n1 % n2);
}