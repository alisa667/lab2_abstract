#pragma once
#include <string>
#include "IOperationMaker.h"
#include "OperationFactory.h"

template<typename T>
class OperationMaker: public IOperationMaker{
public:
    OperationMaker(const std::string& name)
    {
        OperationFactory::getInstance().RegisterMaker(name, this);
    }
    Operation* Create(const std::string& name) const{
        return new T();
    }
};
