#include "Define.h"
#include "../exceptions/arguments_error.h"

REGISTER_OPERATION(Define, DEFINE);
void Define::execute(const std::list<std::string>& args, Context& context) {
	if (args.size() != 2) {
		throw arguments_error("Define needs two arguments");
	}
	else {
		auto it = args.begin();
		std::string newName = *it;
		double newVar = std::stod(*(++it));
		context.pushVar(newVar, newName);
	}
}