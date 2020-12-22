#pragma once
#include "Operation.h"
#include "OperationMaker.h"
#include "exceptions/operation_error.h"


class OperationFactory {
	std::map<std::string, IOperationMaker*> makers;
	OperationFactory() = default;
public:
	OperationFactory(const OperationFactory&) = delete;

	static OperationFactory& getInstance() {
		static OperationFactory factory;
		return factory;
	};

	Operation* getOperation(const std::string& name) const {
		auto i = makers.find(name);
		if (i == makers.end())
		{
			throw operation_error("Unrecognized operation!");
		}
		else {
			IOperationMaker* maker = i->second;
			return maker->Create(name);
		}
	}

	void RegisterMaker(const std::string& name, IOperationMaker* maker) {
		if (makers.find(name) != makers.end())
		{
			throw new std::logic_error("Multiple makers for given key!");
		}
		makers[name] = maker;
	};

};


