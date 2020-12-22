#pragma once
#include "../Operation.h"

class Divide : public Operation {
	void execute(const std::list<std::string>& args, Context& context) override;
};