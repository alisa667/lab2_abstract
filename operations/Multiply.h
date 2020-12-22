#pragma once
#include "../Operation.h"

class Multiply : public Operation {
	void execute(const std::list<std::string>& args, Context& context) override;
};