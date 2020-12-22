#pragma once
#include "MyException.h"

class arithmetic_error :public MyException {
public:
	arithmetic_error(const std::string& message) : MyException(message) {};
};