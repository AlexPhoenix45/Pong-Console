#include <iostream>
#include <conio.h>
#include "console.h"
#include "leftPlayer.hpp"
#include "rightPlayer.hpp"
#include "Ball.hpp"

//consoleWidth = 120;
//consoleHeight = 30;
const short gameWidth = 70;
const short gameHeight = 20;

using namespace std;

leftPlayer lp;
rightPlayer rp;

void printBorder()
{
	printLine(0, 70, 0, 141);
	printLine(0, 70, 20, 141);
	printColumn(0, 20, 0, 141);
	printColumn(0, 20, 70, 141);
}

bool Menu()
{
	gotoXY(70 / 2 - (9 / 2), 5);
	cout << "PING PONG";
	gotoXY(70 / 2 - (7 / 2), 10);
	cout << "1. PLAY";
	gotoXY(70 / 2 - (7 / 2), 12);
	cout << "2. QUIT";
	char c = 0;
	while (c != '1' && c != '2')
	{
		c = _getch();
		switch(c)
		{
		case '1':
			clrscr();
			return true;
			break;
		case '2':
			clrscr();
			return false;
			break;
		default:
			break;
		}
	}
	return true;
}

void Move(leftPlayer &lp, rightPlayer &rp)
{
	int c = 0;
	if(_kbhit())
	{
		c = 0;

		switch ((c = _getch())) {
		case 72:
			rp.setY(rp.getY() - 1);
			clrscr();
			break;
		case 80:
			rp.setY(rp.getY() + 1);
			clrscr();
			break;
		case 115:
			lp.setY(lp.getY() + 1);
			clrscr();
			break;
		case 119:
			lp.setY(lp.getY() - 1);
			clrscr();
			break;
		default:
			break;
		}
	}

	lp.printPlayer();
	rp.printPlayer();
}



int main()
{

	printBorder();					//in biên của game
	if (Menu() == false)			//nếu người chơi chọn thoát game, game sẽ thoát
		return 0;

	while (true)
	{
	//Hien thi
		printBorder();
		Move(lp, rp);

	//Dieu khien


	//Xu ly 


	//Ket thuc

	}

	return 0;
}