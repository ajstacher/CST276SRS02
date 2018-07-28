#include "stdafx.h"
#include <string>
#include <sstream>
#include <array>
#include "DateValidatorI18NEnum.h"

bool DateValidatorI18NEnum::check(const Format format, const std::string date) const
{
	if (format == Format::DMY)
	{
		return is_good_DMY(date);
	}
	if (format == Format::MDY)
	{
		return is_good_MDY(date);
	}
	if (format == Format::YMD)
	{
		return is_good_YMD(date);
	}
	return false;
}

bool DateValidatorI18NEnum::is_good_DMY(std::string date) const
{
	auto result{ true };

	auto delimiter{ '\0' };
	auto year{ -1 };
	auto month{ -1 };
	auto day{ -1 };

	auto iss{ std::istringstream(date) };

	// day and month swapped for this format
	iss >> day;
	iss >> std::ws >> delimiter;
	result = result && delimiter == '/';
	iss >> month;
	iss >> std::ws >> delimiter;
	result = result && delimiter == '/';
	iss >> year;

	result = result &&
		!iss.fail() && iss.eof() &&
		year >= 1901 && year < 2100 && month >= 1 && month <= 12 && day >= 1 &&
		day <= days_in_month(year, month);

	return result;
}

bool DateValidatorI18NEnum::is_good_YMD(const std::string date) const
{
	auto result{ true };

	auto delimiter{ '\0' };
	auto year{ -1 };
	auto month{ -1 };
	auto day{ -1 };

	auto iss{ std::istringstream(date) };

	//year and day swapped for this format
	iss >> year; //swapped
	iss >> std::ws >> delimiter;
	result = result && delimiter == '/';
	iss >> month;
	iss >> std::ws >> delimiter;
	result = result && delimiter == '/';
	iss >> day; //swapped

	result = result &&
		!iss.fail() && iss.eof() &&
		year >= 1901 && year < 2100 && month >= 1 && month <= 12 && day >= 1 &&
		day <= days_in_month(year, month);

	return result;
}

bool DateValidatorI18NEnum::is_good_MDY(const std::string date) const
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

int DateValidatorI18NEnum::days_in_month(int const year, int const month)
{
	static const std::array<int, 12> days{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int result{ days.at(month - 1) };
	if (month == 2 && year % 4 == 0)
	{
		result = 29;
	}
	return result;
}

