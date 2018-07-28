#pragma once

class AbstractClass
{
private:
	virtual void PrimitiveOperation1() = 0;
	virtual void PrimitiveOperation2() = 0;

public:
	virtual ~AbstractClass() = default;
	void TemplateMethod();
};

