#pragma once
#include "MyException.h"
class variable_error :public MyException {
public:
	variable_error(const std::string& message) : MyException(message) {};
};