#include "stdafx.h"
#include "Context.h"

Context::Context(Strategy & strategy) : _strategy(strategy)
{
}

void Context::setStrategy(const Strategy & strategy) 
{
	_strategy = strategy;
}

void Context::operation() const
{
	_strategy.Algorithm();
}
