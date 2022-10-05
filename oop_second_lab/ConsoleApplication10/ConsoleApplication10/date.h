#include "datte.h"


Date::Date(void)
{
	setyear(0);
	setmonth(0);
	setday(0);
}


int Date::getyear()
{
	return year;
}
void Date::setyear(int value)
{
	year = value;
}
int Date::getmonth()
{
	return month;
}
void Date::setmonth(int value)
{
	month = value;
}
int Date::getday()
{
	return day;
}
void Date::setday(int value)
{
	day = value;
}


