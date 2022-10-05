
#include "timeO.h"
#include "ConsoleApplication10.cpp"
#include "iostream"
using namespace std;

void TimeIO::Input(Time& time)
{
	cout << "\n\tEnter hour: ";
	time.sethour(ConsolI::GetValue(cin));

	cout << "\tEnter minute: ";
	time.setmin(ConsolI::GetValue(cin));

}

