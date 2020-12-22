#pragma once
#include "MyException.h"

class arguments_error :public MyException {
public:
	arguments_error(const std::string& message) : MyException(message) {};
};
