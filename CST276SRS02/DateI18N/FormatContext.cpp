#include "stdafx.h"
#include "FormatContext.h"

void FormatContext::setFormat(IDateValidator * v, std::string const date)
{
	//set format with string here
	_date = date;
	validator = v;
}

bool FormatContext::check()
{
	return validator->is_good(_date);
}
