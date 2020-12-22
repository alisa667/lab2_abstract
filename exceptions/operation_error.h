#pragma once
#include "MyException.h"

class operation_error :public MyException {
public:
	operation_error(const std::string& message) : MyException(message) {};
};