#pragma once
#include <iostream>
#include <Windows.h>
using namespace std;

class ConsolI

{

public:

	static double GetValue(istream& is)
	{

		double value;
		while (true)
		{
			is >> value;
			if (is.peek() == '\n')
			{
				is.get();
				break;
			}
			else
			{
				is.clear();
				while (is.get() != '\n') {};
			}
		}
		return value;
	};

};
