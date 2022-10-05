#pragma once
#include "TimeO.h"
#include "dateOl.h"
#include "Time.h"
#include "datte.h"
#include "Screen.h"
#include "ConsoleApplication10.cpp"

using namespace std;

class Clock
{
	Time time;
	Date date;
	TimeIO* IOTime;
	DateD* DDate;
	Screen* screen;

public:

	void SetTime() {
		IOTime->Input(time)
			;
	}
	void SetDate() {
		DDate->Input(date);

	}
	void ShowTime() {
		screen->OutputT(time);
	};
	void ShowDate() {
		screen->OutputD(date);
	}

	void Budilnik() {
		time.budilnik();
	}
};

