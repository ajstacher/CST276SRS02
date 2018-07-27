#include "stdafx.h"
#include <cassert>
#include <vector>
#include "MDYValidator.h"
#include "DMYValidator.h"
#include "YMDValidator.h"
#include "YDMValidator.h"
#include "FormatContext.h"
#include <functional>
#include <iostream>

int main()
{
	MDYValidator mdy;
	DMYValidator dmy;
	YMDValidator ymd;
	YDMValidator ydm;

	FormatContext format;

	format.setFormat(&mdy, "12/31/1999");
	assert(format.check());

	format.setFormat(&dmy, "31/12/1999");
	assert(format.check());

	format.setFormat(&ymd, "1999/12/31");
	assert(format.check());

	format.setFormat(&ydm, "1999/31/12");
	assert(format.check());

	////UI IMPLEMENTATION

	//std::string test_date{};
	//std::string dummy{};
	//auto checks_passed = 0;
	//auto good_format = false;

	//std::vector<std::reference_wrapper<IDateValidator>> formats_vector{ mdy, dmy, ymd, ydm };

	//while (!good_format)
	//{
	//	std::cout << "Enter Date: ";
	//	std::cin >> test_date;

	//	for (IDateValidator& i : formats_vector)
	//	{
	//		format.setFormat(&i, test_date);
	//		if (format.check())
	//		{
	//			checks_passed++;
	//		}
	//	}
	//	if (checks_passed == 0)
	//	{
	//		std::cout << "Invalid Date Format!" << std::endl;
	//	}
	//	else
	//	{
	//		good_format = true;
	//		std::cout << "Date format accepted!";
	//	}
	//}
	//std::cin >> dummy;
	//exit(0);

	////END UI IMPLEMENTATION

	return 0;
}


