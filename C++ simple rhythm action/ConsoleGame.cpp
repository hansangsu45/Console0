#include<iostream>
#include<time.h>
#include "Console.h"
#include "Note.h"
using namespace std;

void drawScreen()
{
	cout << "|               |" << endl;
	cout << "|               |" << endl;
	cout << "|               |" << endl;
	cout << "|               |" << endl;
	cout << "|               |" << endl;
	cout << "|               |" << endl;
	cout << "|               |" << endl;
	cout << "|               |" << endl;
	cout << "|               |" << endl;
	cout << "|               |" << endl;
	cout << "|               |" << endl;
	cout << "|               |" << endl;
	cout << "  1 2 3 4 5 6 7  " << endl;

	gotoXY(1, 10);
	setTextColor(1);
	cout << "---------------";
	setTextColor(15);
}

int main()
{
	srand((unsigned)time(NULL));

	Note* note = new Note();
	note->initNote();

	while (true)
	{
		drawScreen();

		note->drawNote();

		gotoXY(16, 12);

		note->downNote();

		note->checkLine();
		note->checkEnd();

		sleep(100);
		clrscr();
	}

	return 0;
}


