#pragma once
#include <list>
#include <string>
#include "Context.h"
#include "OperationMaker.h"

#define REGISTER_OPERATION(T, NAME) static OperationMaker<T> Maker(#NAME);

class Operation {
public:
	virtual void execute(const std::list<std::string> &args, Context& context) = 0;
	virtual ~Operation() = default;
};

