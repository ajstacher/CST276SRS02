// GoFStrategy.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Context.h"
#include "ConcereteStratregy1.h"
#include "ConcreteStrategy0.h"
#include "NullStrategy.h"


int main()
{
	NullStrategy nullStrat;
	

	ConcreteStrategy0 concrete0;
	ConcereteStratregy1 concrete1;

	Context myContext(concrete0);

	myContext.setStrategy(concrete1);
	myContext.operation();

	myContext.setStrategy(concrete0);
	myContext.operation();
}

