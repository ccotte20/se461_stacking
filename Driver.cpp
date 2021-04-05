// Honor Pledge:
// I pledge that I have neither given nor 
// received any help on this assignment.
// Clark Otte

#include <cstdlib>
#include <stdlib.h>
#include <iostream>
#include <sstream>
#include "Stack_Factory.h"
#include "Command.h"
#include "Array.h"
#include "Stack.h"

void priorityCheck(Stack<Command *> & temp, Dynamic_Array<Command *> & postfix, Command * cmd, size_t & i)
{
	if(temp.size()==0)
	{
		temp.push(cmd);
		return;
	}
	else
	{
		Command * tempcmd = temp.top();
        
   		if(cmd->priority() == 0)
		{
			temp.push(cmd);
			return;
		}
		if(tempcmd->priority() < cmd->priority())
		{
			temp.push(cmd);
		}
		else
		{
			while((cmd->priority()<=tempcmd->priority()) && (temp.size()!=0))
			{
                postfix.resize(postfix.size()+1);
				
				postfix[i]=tempcmd;
				i++;
				temp.pop();
				if(temp.size()!=0)
				{
					tempcmd= temp.top();
				}
				
			}
			temp.push(cmd);
		}
		
	}
}

bool infixToPostfix(const std::string & infix, Stack_Factory & factory, Dynamic_Array<Command *> & postfix)
{
	std::istringstream input(infix);
	std::string token;
    
	int num = 0;
	Command * cmd = 0;
    
	Stack <Command * > temp;
	size_t i = 0;
    
	int countnum = 0;
	int countops = 0;
	
	while(!input.eof())
	{
		input >> token;
		
		if(token == "(")
		{
			cmd = factory.createParenthesisCommand();
			temp.push(cmd);
		}
		else if(token == "+")
		{
			if(countnum==countops+1)
            {
				countops++;
				cmd = factory.createAddCommand();
				priorityCheck(temp, postfix, cmd, i);
			}
			else
			{				
				break;
			}
		}
		else if(token == "-")
		{
			if(countnum==countops+1)
			{
				countops++;
				cmd = factory.createSubtractCommand();
				priorityCheck(temp, postfix, cmd, i);
			}
            else 
			{
				break;
			}
		}
		else if(token == "*")
		{
			if(countnum==countops+1)
			{
				countops++;
				cmd = factory.createMultiplyCommand();
				priorityCheck(temp, postfix, cmd, i);
			}
			else
			{
				break;
			}
		}
		else if(token == "/")
		{
			if(countnum==countops+1)
			{
				countops++;
				cmd = factory.createDivideCommand();
				priorityCheck(temp, postfix, cmd, i);
			}
			else 
			{
				break;
			}
		}
		else if(token == "%")
		{
			if(countnum==countops+1)
			{
				countops++;
				cmd = factory.createModulusCommand();
				priorityCheck(temp, postfix, cmd, i);
			}
			else 
			{
				break;
			}
		}
		else if(token == ")")
		{   
			while(temp.size()!=0)
			{
				Command * tempcmd = temp.top();
				if(tempcmd->priority()!=0)
				{
					postfix.resize(postfix.size()+1);
					
					postfix[i]=tempcmd;
					i++;
					temp.pop();
				}
				else
				{
					delete tempcmd;
					break;
				}
			}
			temp.pop();
		}
		else if(!(atoi(token.c_str())==0 & token[0]!='0'))
		{
			std::istringstream token_num(token);
			token_num >> num;
			countnum++;
			cmd = factory.createNumberCommand(num);
			postfix.resize(postfix.size()+1);
			postfix[i]=cmd;
			i++; 
		}
		else
		{
			return false;
		}
	}
	
	
	while(temp.size()!=0)
	{
        postfix.resize(postfix.size()+1);
        postfix[i]=temp.top();
		temp.pop();
		i++;
	}
   
    if(countnum==countops+1)
	{
        return true;
	}
    else
	{
        return false;
	}
}

bool arePair(char opening,char closing)
{
	if(opening == '(' && closing == ')')
        return true;
	else
        return false;
}

bool areParanthesesBalanced(std::string exp)
{
	Stack<char> S;
	for(int i =0;i<exp.length();i++)
	{
		if(exp[i] == '(' )
			S.push(exp[i]);
		else if(exp[i] == ')')
		{
			if(S.size()==0 || !arePair(S.top(),exp[i]))
				return false;
			else
				S.pop();
		}
	}
	if(S.size()==0)
        return true;
    else
        return false;
}

int main()
{
	std::string infix;
	while(infix != "QUIT")
	{
		std::cout<<"Give the expression or type QUIT"<<std::endl;
		std::cin>>infix;
		
		if(infix != "QUIT")
		{
			if(areParanthesesBalanced(infix))
			{
				int result;
				bool check=false;
				Stack_Factory factory;
				Dynamic_Array<Command *> postfix;
		
				check = infixToPostfix(infix, factory, postfix);
				if(check==false)
				{
					std::cout<<"Wrong expression"<<std::endl;
				}
				else
				{
					Stack <int> s;
					int result;
					
					for(int i = 0; i < postfix.size(); i++)
					{						
						if(!postfix[i]->execute(s))
						{
							check=false;
						}
						delete postfix[i];
					}
					if(check==false)
					{
						std::cout<<"Could not execute"<<std::endl;
					}
					else
					{
						result = s.top();
						s.pop();
						std::cout<<"Result: "<<result<<std::endl;
					}
				}
			}
			else
			{
				std::cout<<"Parenthesis not balanced"<<std::endl;
			}
		}
	}
	return 0;
}