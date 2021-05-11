#pragma once

class Note
{
private:
	int index;
	int x;
	int y;
	int tone[7] = { 523,587,659,698,784,880,988 };

public:
	void initNote();

	void drawNote();
	void downNote();

	void checkLine();
	void checkEnd();

	void playSound();
};
