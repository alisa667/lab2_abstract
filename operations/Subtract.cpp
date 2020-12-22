#include "../exceptions/arguments_error.h"
#include "../exceptions/stack_error.h"
#include "Subtract.h"

REGISTER_OPERATION(Subtract, -);
void Subtract::execute(const std::list<std::string>& args, Context& context) {
	if (context.stackSize() < 2) {
		throw stack_error("At least two elements on the stack required");
	}
	if (args.size() != 0) {
		throw arguments_error("Subtraction doesn't need arguments");
	}
	else {
		double arg1 = context.pop();
		double arg2 = context.pop();
		double diff = arg1 - arg2;
		context.push(diff);
	}
}