#pragma once
#include <string>

class IDateValidator
{
public:
	virtual ~IDateValidator() = default;

	virtual bool is_good(std::string const date) const = 0;
	virtual int days_in_month(int const year, int const month)const = 0;
};