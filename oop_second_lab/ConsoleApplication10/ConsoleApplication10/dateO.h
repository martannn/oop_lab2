#include "dateOl.h"
#include "ConsoleApplication10.cpp"
#include "iostream"
using namespace std;

void DateD::Input(Date& date)
{
	cout << "\n\tEnter year: ";
	date.setyear(ConsolI::GetValue(cin));

	cout << "\tEnter mounth: ";
	date.setmonth(ConsolI::GetValue(cin));

	cout << "\tEnter day: ";
	date.setday(ConsolI::GetValue(cin));

}

