#include "stdafx.h"
#include "ConcreteClass0.h"
#include "ConcreteClass1.h"

int main()
{
	ConcreteClass0 concrete0;
	ConcreteClass1 conerete1;

	concrete0.TemplateMethod();

	conerete1.TemplateMethod();

    return 0;
}
