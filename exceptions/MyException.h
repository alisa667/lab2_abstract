#pragma once
#include <string>
#include <stdexcept>

class MyException : public std::exception{
	std::string message;
protected:
	MyException() = default;
	MyException(std::string error) {
		message = error;
	}
public:
	const char* what() {
		return message.c_str();
	}
};