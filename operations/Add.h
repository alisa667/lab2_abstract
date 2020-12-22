#pragma once
#include "../Operation.h"

class Add : public Operation {
	void execute(const std::list<std::string>& args, Context& context) override;
};