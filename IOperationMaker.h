#pragma once
#include <string>
#include "Operation.h"

class Operation;

class IOperationMaker {
public:
	virtual Operation* Create(const std::string& name) const = 0;
	virtual ~IOperationMaker() = default;
};
