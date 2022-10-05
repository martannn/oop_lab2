#pragma once
#include <iostream>
#include "ConsoleApplication10.cpp"
#include <thread>

class Time
{
protected:
	int hour;
	int min;

public:
	Time(void);


	int gethour();
	void sethour(int value);
	int getmin();
	void setmin(int value);

	void budilnik();

};

