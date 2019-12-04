#include "Print.h"
#include "Key.h"
#include <iostream>
#include <windows.h>
#include <conio.h>

const int UP = 0;
const int DOWN = 1;
const int LEFT = 2;
const int RIGHT = 3;
const int ENTER = 4;
Key::Key() {
	int keyCode = menuChose();
	cout << keyCode;
}
int Key::menuChose() {
	int x = 32;
	int y = 21;
	int n;
	gotoxy(x, y);
	cout << ">";
	while (1) {
		n = KeyControl();
		switch (n) {
		case UP:
			if (y > 21) {
				gotoxy(x, y);
				cout << " ";
				y -= 22;
				gotoxy(x, y);
				cout << ">";
			}
			break;
		case DOWN:
			if (y < 65) {
				gotoxy(x, y);
				cout << " ";
				y += 22;
				gotoxy(x, y);
				cout << ">";
			}
			break;
		case LEFT:
			if (x > 36) {
				gotoxy(x, y);
				cout << " ";
				x -= 42;
				gotoxy(x, y);
				cout << ">";
			}
			break;
		case RIGHT:
			if (x < 33) {
				gotoxy(x, y);
				cout << " ";
				x += 42;
				gotoxy(x, y);
				cout << ">";
			}
			break;
		case ENTER:
			gotoxy(0, 70);
			break;
		}
		if (n == ENTER) {
			break;
		}
	}
	return n;
}
int Key::KeyControl() {
	int temp = _getch();
	while (1) {
		if (temp == 224) {
			temp = _getch();
			switch (temp)
			{
			case 72:	//위
				return UP;
			case 80:	//아래
				return DOWN;
			case 75:	//왼쪽
				return LEFT;
			case 77:	//오른쪽
				return RIGHT;
			}
		}
		else if (temp == 13) {
			return ENTER;
		}
	}
}