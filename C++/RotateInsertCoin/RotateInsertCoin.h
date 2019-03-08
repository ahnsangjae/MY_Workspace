#ifndef ROTATE_HEADER
#define ROTATE_HEADER

#include "Turboc.h"

#define MAX 1024

class Signal
{
private:
	bool exist;
	char ch;
	int x, y;
	int distance;
	int nFrame;
	int nStay;
	void Hide() { gotoxy(x, y); _putch(' '); }
	void Show() { gotoxy(x, y); _putch(ch); }

public:
	Signal() { exist = false; }
	bool IsExist() const { return exist; }
	void Generate(char ach = ' ', int adistance = 0, int anFrame = 0);
	void Move();
};

void Signal::Generate(char ach, int adistance, int anFrame)
{
	exist = true;

	if (ach == ' ')
		ch = random('Z' - 'A' + 1) + 'A';
	else
		ch = ach;

	x = random(80);
	y = 0;

	if (adistance == 0)
		distance = random(14) + 9;
	else
		distance = adistance;

	if (anFrame == 0)
		nFrame = nStay = random(15) + 5;
	else
		nFrame = nStay = anFrame;

	Show();
}

void Signal::Move()
{
	if (--nStay == 0)
	{
		nStay = nFrame;
		Hide();

		if (++y < distance)
			Show();
		else
			exist = false;
	}
}

class SignalManager
{
private:
	Signal *S;
	const int Max;
	int Freq;
	mutable int i;

public:
	SignalManager(int aMax, int aFreq) : Max(aMax), Freq(aFreq)
	{
		randomize();
		S = new Signal[Max];
	}

	~SignalManager() { delete[] S; }

	void Generate(char ach = ' ', int adistance = 0, int anFrame = 0)
	{
		if (random(Freq) == 0)
		{
			for (i = 0; i < Max; i++)
			{
				if (!S[i].IsExist())
				{
					S[i].Generate(ach, adistance, anFrame);
					break;
				}
			}
		}
	}
	void Move()
	{
		for (i = 0; i < MAX; i++)
		{
			if (S[i].IsExist())
				S[i].Move();
		}
	}
};

class BlinkMessage
{
private:
	bool bShow;
	char *Mes;
	int nFrame, Freq1, Freq2;
	int start, end;		// 메시지가 출력되는 x 좌표의 범위
	int y;		// 메시지가 출력되는 y 좌표
	mutable int i;

public:
	BlinkMessage(int astart, int aend, int ay, const char *aMes, int anFrame) : start(astart), end(aend), y(ay), nFrame(anFrame)
	{
		bShow = false;
		Freq1 = nFrame;
		Freq2 = 3 * nFrame;

		Mes = (char *)malloc(sizeof(char)*(end - start - 1));

		for (i = 0; i < end - start - 1; i++)
		{
			Mes[i] = ' ';
		}

		memcpy(Mes, aMes, strlen(aMes));
		Mes[end - start - 2] = '\0';
	}

	~BlinkMessage()
	{
		free(Mes);
	}

	void Blink();
	void R_move();
	void print_str(int x, int y, const char *str);
};

void BlinkMessage::print_str(int x, int y, const char *str)
{
	gotoxy(x, y);
	puts(str);
}

void BlinkMessage::R_move()
{
	char tmp;
	int i;

	Freq1--;

	if (!Freq1)
	{
		Freq1 = 2 * nFrame;
		tmp = Mes[end - start - 3];
		memmove(Mes + 1, Mes + 0, end - start - 3);
		Mes[0] = tmp;

		gotoxy(start + 1, y);
		puts(Mes);
	}
}

void BlinkMessage::Blink()
{
	int i;
	Freq2--;

	if (!Freq2)
	{
		Freq2 = nFrame;

		if (bShow)
		{
			gotoxy(start + 1, y);	// (11, 10)

			for (i = 0; i < end - start - 1; i++)
			{
				_putch(' ');
			}
		}
		else
		{
			gotoxy(start + 1, y);	// (11, 10)
			puts(Mes);
		}

		bShow = !bShow;
	}
}

#endif