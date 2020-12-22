#pragma once
#include "../Operation.h"

class Comment : public Operation {
	void execute(const std::list<std::string>& args, Context& context) override;
};