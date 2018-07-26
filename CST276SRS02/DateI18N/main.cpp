// DateI18N.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <array>
#include <cassert>
#include <string>
#include <sstream>


class Date
{
private:
	static auto days_in_month(int const year, int const month)
	{
		static const std::array<int, 12> days{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		int result{ days.at(month - 1) };
		if (month == 2 && year % 4 == 0)
		{
			result = 29;
		}
		return result;
	}

public:
	static auto isGood(std::string const date_string)
	{
		auto result{ true };

		auto delimiter{ '\0' };
		auto year{ -1 };
		auto month{ -1 };
		auto day{ -1 };

		

		auto iss{ std::istringstream(date_string) };

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
};

int main()
{
	assert(Date::isGood("12/31/1999"));

	return 0;
}


