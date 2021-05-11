#include "Note.h"
#include "Console.h"
#include<iostream>
#include<conio.h>
using namespace std;

void Note::initNote()
{
	index = rand() % 7 + 1;
	x = index * 2;
	y = 0;
}

void Note::downNote()
{
	y++;

}

void Note::playSound()
{
	beep(tone[index - 1], 500);
}

void Note::drawNote()
{
	gotoXY(x, y);
	setTextColor(14);
	cout << "Q";
	setTextColor(15);
}

void Note::checkLine()
{
	char key = _kbhit();
	char k;
	if (key) {
		k = _getch() - '0';
		//key2 = tolower(key2);

		if (y == 11 && k == index) {
			playSound();
		}
	}
}

void Note::checkEnd()
{
	if (y == 12)
	{
		index = rand() % 7 + 1;
		initNote();
	}
}