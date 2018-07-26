#include "stdafx.h"
#include "MDYValidator.h"
#include <array>
#include <string>
#include <sstream>

//Code below taken from Besser slide 14 in "Strategy" Google doc

bool MDYValidator::is_good(std::string const date) const
{
	auto result{ true };

	auto delimiter{ '\0' };
	auto year{ -1 };
	auto month{ -1 };
	auto day{ -1 };

	auto iss{ std::istringstream(date) };

	iss >> month;
	iss >> std::ws >> delimiter;
	result = result && delimiter == '/';
	iss >> day;
	iss >> std::ws >> delimiter;
	result = result && delimiter == '/';
	iss >> year;

	result = result &&
		!iss.fail() && iss.eof() &&
		year >= 1901 && year < 2100 && month >= 1 && month <= 12 && day >= 1 &&
		day <= days_in_month(year, month);

	return result;
}


int MDYValidator::days_in_month(int const year, int const month) const
{
	static const std::array<int, 12> days{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int result{ days.at(month - 1) };
	if (month == 2 && year % 4 == 0)
	{
		result = 29;
	}
	return result;
}
