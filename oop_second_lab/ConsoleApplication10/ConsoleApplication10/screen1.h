#include "screen.h"
#include "ConsoleApplication10.cpp"
#include "iostream"
using namespace std;

void Screen::OutputD(Date& date)
{
	cout << "                                     -----------" << endl;
	cout << "                                     |" << date.getday() << "." << date.getmonth() << "." << date.getyear() << "|" << endl;
	cout << "                                     -----------" << endl;
}

void Screen::OutputT(Time& time)
{
	cout << "                                       -------" << endl;
	cout << "                                       |" << time.gethour() << ":" << time.getmin() << "|" << endl;
	cout << "                                       -------" << endl;
}
