#pragma once
#include "IDateValidator.h"
class DMYValidator : public IDateValidator
{
public:
	virtual ~DMYValidator() = default;
	bool is_good(std::string const date) const override;
	int days_in_month(int const year, int const month) const override;
};

