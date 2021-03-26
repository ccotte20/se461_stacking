driver:

// 2+2
Stack<Command> OppStack = new Stack<Command>();
Stack<int> NumStack = new Stack<int>();
OppStack->push(factory->createAddCommand()); //<--- OppStack = +, check top of stack to make sure it doesn't violate algorithm
NumStack // <--- NumStack = 2 2

Process Function

oppStack->pop()->execute(NumStack);

std::cout << "Answer = " << NumStack->pop() << std::endl;

command.h

virtual void execute(Stack<int> & s) = 0;

virtual ~command() {};

Binary_Command.cpp

void Binary_Command::execute(Stack<int> & s)
{
	int num1(0), num2(0), num3(0);
	
	num2 = s->pop();
	num1 = s->pop();
	
	num3 = this->evaluate(num1, num2);
	
	s->push(num3)
}

AddCommand.cpp

AddCommand AddCommand() {};

virtual ~AddCommand() {};

int AddCommand::evaluate(int x, int y)
{
	return x+y;
}

Factory.h

virtual Command * createAddCommand() = 0;

Stack_Factory.cpp

Command * Stack_Factory::createAddCommand()
{
	return new AddCommand();
}

// Free tacos for infix to postfix
try {
	num = std::stoi(token);
} catch (std::invalid_argument) {
	// Error converting token to a number. Invalid input.
	this->delete_stack(temp);
	this->delete_postfix(postfix);
	return nullptr;
}

//invalid inputs need to check for:
2 + + 2
2 2

//Hints & Tips
run code
Try invalid input, handle division and modulus by 0
Try unusual combinations of operators and check that your operator precedence works
Use hierarchical inheritance in code:
	command -> binary operator command -> add command
Use valgrind report to attempt to solve the problem - Focus on leaks ignore errors in report
