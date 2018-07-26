#pragma once
#include "IDateValidator.h"
class NullValidator :
	public IDateValidator
{
public:
	virtual ~NullValidator() = default;
	bool is_good(std::string const date) const override;
	int days_in_month(int const year, int const month)const override;
};

