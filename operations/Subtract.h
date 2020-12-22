#pragma once
#include "../Operation.h"

class Subtract : public Operation {
	void execute(const std::list<std::string>& args, Context& context) override;
};