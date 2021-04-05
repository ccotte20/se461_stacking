// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte
#ifndef _FACTORY_
#define _FACTORY_

#include <iostream>
#include "Add_Command.h"
#include "Subtract_Command.h"
#include "Number_Command.h"
#include "Multiply_Command.h"
#include "Divide_Command.h"
#include "Parenthesis_Command.h"
#include "Modulus_Command.h"

class Factory
{
    
    public:
    
        Factory (void) {}
    
        virtual ~Factory (void) {}
    
        virtual Number_Command * createNumberCommand (int num)=0;
    
        virtual Add_Command * createAddCommand (void) = 0;
    
        virtual Subtract_Command * createSubtractCommand (void) = 0;
    
        virtual Multiply_Command * createMultiplyCommand (void) = 0;
    
        virtual Divide_Command * createDivideCommand (void) = 0;
    
        virtual Modulus_Command * createModulusCommand (void) = 0;
    
        virtual Parenthesis_Command * createParenthesisCommand (void) = 0;
};
#endif