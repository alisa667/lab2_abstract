#pragma once
#include "../Operation.h"

class Push : public Operation {
	void execute(const std::list<std::string>& args, Context& context) override;
};