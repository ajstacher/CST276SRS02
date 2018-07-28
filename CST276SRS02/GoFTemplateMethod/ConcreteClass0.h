#pragma once
#include "AbstractClass.h"

class ConcreteClass0 : public AbstractClass
{
private:
	virtual void PrimitiveOperation1() override;
	virtual void PrimitiveOperation2() override;

public:
	virtual ~ConcreteClass0() = default;
};

