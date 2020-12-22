#include "Sqrt.h"
#include "../exceptions/arguments_error.h"
#include "../exceptions/stack_error.h"
#include "../exceptions/arithmetic_error.h"

REGISTER_OPERATION(Sqrt, SQRT);
void Sqrt::execute(const std::list<std::string>& args, Context& context) {
	if (context.stackSize() < 1) {
		throw stack_error("At least one element on the stack required");
	}
	if (args.size() != 0) {
		throw arguments_error("SQRT doesn't need arguments");
	}
	else {
		double arg = context.pop();
		if (arg < 0) {
			throw arithmetic_error("Can't take sqrt of a negative number");
		}
		else {
			arg = sqrt(arg);
			context.push(arg);
		}
	}
}