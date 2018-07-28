#include "stdafx.h"
#include "Context.h"

void Context::setStrategy(Strategy * strategy) 
{
	_strategy = strategy;
}

void Context::operation() const
{
	_strategy->Algorithm();
}
