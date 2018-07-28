#pragma once
#include "IDateValidator.h"
#include "NullValidator.h"

class FormatContext
{
private:
	IDateValidator * validator{ &n };
	NullValidator n;
	std::string _date{};

public:
	void setFormat(IDateValidator * v, std::string const date);
	bool check() const;
};