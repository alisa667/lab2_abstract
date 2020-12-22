#pragma once
#include "../Operation.h"

class Print : public Operation {
	void execute(const std::list<std::string>& args, Context& context) override;
};