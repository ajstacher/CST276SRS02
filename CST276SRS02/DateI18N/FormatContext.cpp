#include "stdafx.h"
#include "FormatContext.h"

void FormatContext::setFormat(IDateValidator * v, std::string const date)
{
	_date = date;
	validator = v;
}

bool FormatContext::check() const
{
	return validator->is_good(_date);
}