// DateI18NEnum.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "DateValidatorI18NEnum.h"
#include <cassert>

int main()
{
	DateValidatorI18NEnum validator;

	assert(validator.check(DateValidatorI18NEnum::Format::YMD, "2018/12/31"));
	assert(validator.check(DateValidatorI18NEnum::Format::DMY, "31/12/2018"));
	assert(validator.check(DateValidatorI18NEnum::Format::MDY, "12/31/2018"));

    return 0;
}

