#pragma once
#include "IDateValidator.h"

class YMDValidator : public IDateValidator
{
public:
	virtual ~YMDValidator() = default;

	bool is_good(std::string const date) const override;
	int days_in_month(int const year, int const month) const override;
};