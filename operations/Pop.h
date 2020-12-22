#pragma once
#include "../Operation.h"

class Pop : public Operation {
	void execute(const std::list<std::string>& args, Context& context) override;
};