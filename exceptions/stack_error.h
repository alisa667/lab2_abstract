#pragma once
#include "MyException.h"

class stack_error :public MyException {
public:
	stack_error(const std::string& message) : MyException(message) {};
};