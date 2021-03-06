#include "stdafx.h"
#include <cassert>
#include <vector>
#include "MDYValidator.h"
#include "DMYValidator.h"
#include "YMDValidator.h"
#include "YDMValidator.h"
#include "FormatContext.h"
#include <functional>
#include <iostream>

int main()
{
	MDYValidator mdy;
	DMYValidator dmy;
	YMDValidator ymd;
	YDMValidator ydm;

	FormatContext format;

	format.setFormat(&mdy, "12/31/1999");
	assert(format.check());

	format.setFormat(&dmy, "31/12/1999");
	assert(format.check());

	format.setFormat(&ymd, "1999/12/31");
	assert(format.check());

	format.setFormat(&ydm, "1999/31/12");
	assert(format.check());

	return 0;
}


