#include "time.h"


Time::Time(void)
{
	sethour(0);
	setmin(0);
}


int Time::gethour()
{
	return hour;
}
void Time::sethour(int value)
{
	hour = value;
}
int Time::getmin()
{
	return min;
}
void Time::setmin(int value)
{
	min = value;
}

void Time::budilnik()
{
	cout << "Enter hour and minute for alarmclock" << endl;
	int h, m;
	cout << "Enter hour    ";
	cin >> h;
	cout << "Enter minute  ";
	cin >> m;
	cout << endl;
	Time news;
	news.sethour(h);
	news.setmin(m);
	int h1 = gethour();
	int m1 = getmin();
	int h2 = h - h1;
	int m2 = m - m1;


	cout << "alarmclock'll go off in " << h2 << " hours and " << m2 << " minutes" << endl;

}
