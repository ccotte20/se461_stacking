// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte
#include "Binary_Command.h"

Binary_Command:: Binary_Command()
{
    
}

Binary_Command::~Binary_Command()
{
    
}

Binary_Command::execute(Stack<int> &s)
{
	int num1(0), num2(0), num3(0);
	
	num2 = s->top();
	s->pop();
	
	num1 = s->top();
	s->pop();
	
	num3 = this->evaluate(num1, num2);
	
	s->push(num3)
}