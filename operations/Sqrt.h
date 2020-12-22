#pragma once
#include "../Operation.h"

class Sqrt : public Operation {
	void execute(const std::list<std::string>& args, Context& context) override;
};
