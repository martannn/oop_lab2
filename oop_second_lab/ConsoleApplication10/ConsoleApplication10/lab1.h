#include <iostream>
#include "Time.h"
#include "TimeO.h"
#include "datte.h"
#include "dateOl.h"
#include "Screen.h"
#include "dig.h"
#include "ConsoleApplication10.cpp"
using namespace std;
int main() {

	cout << "Hi here! Please, enter date and time" << endl;
	Clock clock;
	clock.SetTime();
	clock.ShowTime();

	clock.SetDate();
	clock.ShowDate();

	clock.Budilnik();


	return 0;
}

