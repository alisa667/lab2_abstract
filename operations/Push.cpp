#include "Push.h"
#include "../exceptions/arguments_error.h"

REGISTER_OPERATION(Push, PUSH);
void Push::execute(const std::list<std::string>& args, Context& context) {
	if (args.size() != 1) {
		throw arguments_error("One argument required");
	}
	else {
		char ch = args.begin()->data()[0];
		double newNumber;
		// push const argument
		if ((ch >= '0' && ch <= '9') || (ch == '-')) {
			newNumber = std::stod(args.begin()->data());
		}
		//push variable
		else {
			std::string varName = args.begin()->data();
			newNumber = context.getVar(varName);
		}
		context.push(newNumber);
	}
}