#pragma once
#include "Strategy.h"
class Context
{
private:
	Strategy & _strategy;

public:
	Context(Strategy & strategy);
	void setStrategy(const Strategy & strategy);
	void operation() const;
};

