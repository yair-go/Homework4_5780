#include "Clock.h"
#include "MyTypes.h"

Clock::Clock(int hour, int minute, int second)
{
	_hour = hour;
	_minute = minute;
	_second = second;

	if (hour > 23)
	{
		_hour = 0;
		_minute = 0;
		_second = 0;
		throw MyTypes::exception_strings[MyTypes::WRONG_FORMAT];
	}
}

Clock::~Clock()
{
}