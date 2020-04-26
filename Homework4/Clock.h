#pragma once
class Clock
{
private:
	int _hour;
	int _minute;
	int _second;

public:
	Clock(int hour = 0, int minute = 0, int second = 0 );
	~Clock();
};

