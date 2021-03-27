// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte
#include "Stack_Factory.h"

Stack_Factory::Stack_Factory (void)
{
	
}
    
Stack_Factory::~Stack_Factory (void)
{
	
}
    
Number_Command * Stack_Factory::createNumberCommand (int num)
{
	return new Number_Command(num);
}
    
Add_Command * Stack_Factory::createAddCommand (void)
{
	return new Add_Command();
}
    
Subtract_Command * Stack_Factory::createSubtractCommand (void)
{
	return new Subtract_Command();
}
    
Multiply_Command * Stack_Factory::createMultiplyCommand (void)
{
	return new Multiply_Command();
}
    
Divide_Command * Stack_Factory::createDivideCommand (void)
{
	return new Divide_Command();
}
    
Modulus_Command * Stack_Factory::createModulusCommand (void)
{
	return new Modulus_Command();
}
    
Parenthesis_Command * Stack_Factory::createParenthesisCommand (void)
{
	return new Parenthesis_Command();
}