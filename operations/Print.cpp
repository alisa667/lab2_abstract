#include "Print.h"
#include <iostream>
#include "../exceptions/arguments_error.h"
#include "../exceptions/stack_error.h"

REGISTER_OPERATION(Print, PRINT);
void Print::execute(const std::list<std::string>& args, Context& context) {
	if (context.stackSize() < 1) {
		throw stack_error("At least one element on the stack required");
	}
	if (args.size() != 0) {
		throw arguments_error("PRINT doesn't need arguments");
	}
	else {
		double arg = context.peek();
		std::cout << arg << std::endl;
	}
}