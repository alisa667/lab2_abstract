#include "Divide.h"
#include "../exceptions/arguments_error.h"
#include "../exceptions/stack_error.h"
#include "../exceptions/arithmetic_error.h"

REGISTER_OPERATION(Divide, / );
void Divide::execute(const std::list<std::string>& args, Context& context) {
	if (context.stackSize() < 2) {
		throw stack_error("At least two elements on the stack required");
	}
	if (args.size() != 0) {
		throw arguments_error("Division doesn't need arguments");
	}
	else {
		double arg1 = context.pop();
		double arg2 = context.pop();
		if (arg2 == 0) {
			throw arithmetic_error("Can't divide by 0");
		}
		else {
			double quotient = arg1 / arg2;
			context.push(quotient);
		}
	}
}