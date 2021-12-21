#include <iostream>

using namespace std;

class rightPlayer
{
private:
	int x = 69;
	int y = 10;
public:
	void printPlayer()
	{
		gotoXY(x, y - 2);
		cout << "[";
		gotoXY(x, y - 1);
		cout << "[";
		gotoXY(x, y);
		cout << "[";
		gotoXY(x, y + 1);
		cout << "[";
		gotoXY(x, y + 2);
		cout << "[";
	}
	void setY(int y)
	{
		this->y = y;
	}
	int getY()
	{
		return y;
	}
};