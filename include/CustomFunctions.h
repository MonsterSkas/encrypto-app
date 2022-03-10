#pragma once

#include <iostream>
#include <Windows.h>
#include <Using.h>

class Animations
{
private:
	int i;

public:
	void Anime_line(int time, int repeat)
	{
		cout << "-" << flush;
		for (i = 1; i <= repeat; i++)
		{
			Sleep(time);
			cout << "\b\\" << flush;
			Sleep(time);
			cout << "\b|" << flush;
			Sleep(time);
			cout << "\b/" << flush;
			Sleep(time);
			cout << "\b-" << flush;
		}
		cout << "\b" << flush;
	}
};