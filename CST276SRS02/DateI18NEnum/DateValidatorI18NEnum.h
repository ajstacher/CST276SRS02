#pragma once
#include <string>

class DateValidatorI18NEnum
{
private:
	bool is_good_DMY(std::string date) const;
	bool is_good_YMD(std::string date) const;
	bool is_good_MDY(std::string date) const;
	static int days_in_month(int const year, int const month);

public:
	enum class Format { YMD, DMY, MDY };
	bool check(Format format, std::string date) const;
};

