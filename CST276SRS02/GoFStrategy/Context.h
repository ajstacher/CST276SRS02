#pragma once
#include "Strategy.h"

class Context
{
private:
	Strategy * _strategy{};

public:
	void setStrategy(Strategy * strategy);
	void operation() const;
};

