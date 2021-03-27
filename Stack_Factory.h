// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte
#ifndef _STACK_FACTORY_
#define _STACK_FACTORY_

#include <iostream>
#include "Factory.h"

class Stack_Factory : public Factory
{
    
    public:
    
        Stack_Factory (void);
    
        virtual ~Stack_Factory (void);
    
        virtual Number_Command * createNumberCommand (int num);
    
        virtual Add_Command * createAddCommand (void);
    
        virtual Subtract_Command * createSubtractCommand (void);
    
        virtual Multiply_Command * createMultiplyCommand (void);
    
        virtual Divide_Command * createDivideCommand (void);
    
        virtual Modulus_Command * createModulusCommand (void);
    
        virtual Parenthesis_Command * createParenthesisCommand (void);
};
#endif