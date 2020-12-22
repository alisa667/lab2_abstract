#include "Multiply.h"
#include "../exceptions/arguments_error.h"
#include "../exceptions/stack_error.h"

REGISTER_OPERATION(Multiply, *);
void Multiply::execute(const std::list<std::string>& args, Context& context) {
	if (context.stackSize() < 2) {
		throw stack_error("At least two elements on the stack required");
	}
	if (args.size() != 0) {
		throw arguments_error("Multiplication doesn't need arguments");
	}
	else {
		double arg1 = context.pop();
		double arg2 = context.pop();
		double product = arg1 * arg2;
		context.push(product);
	}
}