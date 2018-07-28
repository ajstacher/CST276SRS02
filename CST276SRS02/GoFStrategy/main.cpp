#include "stdafx.h"
#include "Context.h"
#include "ConcereteStratregy1.h"
#include "ConcreteStrategy0.h"

int main()
{
	ConcreteStrategy0 concrete0;
	ConcereteStratregy1 concrete1;

	Context myContext;

	myContext.setStrategy(&concrete1);
	myContext.operation();

	myContext.setStrategy(&concrete0);
	myContext.operation();
}

