// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#include <cstdlib>
#include <stdlib.h>
#include <iostream>
#include "Stack_Factory.h"
#include "Command.h"
#include "Array.h"
#include "Stack.h"

bool infixToPostfix(std::string s)
{
	Stack_Factory f = new Stack_Factory();
	Stack<Command> OppStack = new Stack<Command>();
	Stack<int> NumStack = new Stack<int>();
	
	for(int i = 0; i < s.length(); i++)
	{
		try
		{
			num = std::stoi(s[i]);
		} 
		catch (std::invalid_argument)
		{
			// Error converting token to a number. Invalid input.
			return nullptr;
		}
	}
	
}

/* Dr. Ryan, I apologize for the effort put forth on my driver, I did not manage my time well enough.  
I anticipated having more time during this week on my trip to work on it, however the trip has been busier 
than anticipated. I have been trying my best to catch up on work from my previous absences in this class and 
others and I will work as best I can on this during the following week. - Apologies, Clark */

// Dr. Ryan: Let's make sure this next week we get the necessary help to ensure that we find success on this assignment.