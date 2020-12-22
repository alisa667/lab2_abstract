#include "Pop.h"
#include "../exceptions/arguments_error.h"
#include "../exceptions/stack_error.h"

REGISTER_OPERATION(Pop, POP);
void Pop::execute(const std::list<std::string>& args, Context& context) {
	if (context.stackSize() < 1) {
		throw stack_error("At least one element on the stack required");
	}
	if (args.size() != 0) {
		throw arguments_error("POP doesn't need arguments");
	}
	else {
		context.pop();
	}
}