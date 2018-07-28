#pragma once
#include "AbstractClass.h"

class ConcreteClass1 : public AbstractClass
{
private:
	virtual void PrimitiveOperation1() override;
	virtual void PrimitiveOperation2() override;

public:
	virtual ~ConcreteClass1() = default;
};

