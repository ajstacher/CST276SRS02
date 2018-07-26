#include "stdafx.h"
#include "NullValidator.h"

bool NullValidator::is_good(std::string const date) const
{
	return false;
}

int NullValidator::days_in_month(int const year, int const month) const
{
	return -1;
}
