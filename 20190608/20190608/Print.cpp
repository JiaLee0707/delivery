#include "Print.h"
#include <iostream>
#include <windows.h>
using namespace std;
Print::Print() {
	//배열에 틀(특수문자)넣기
	for (int i = 0; i < 6; i++) {
		b[i] = i + 1;
	}
}
void Print::gotoxy(int x, int y) {
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
void Print::Rectangle(int x, int y, int length, int width) {
	int i = 0;
	//틀 맨위
	gotoxy(x, y++);
	cout << (char)b[0];
	for (i = 0; i < length; i++) {
		cout << (char)b[5];
	}
	cout << (char)b[1];

	//틀 중간
	for (i = 0; i < width; i++) {
		gotoxy(x, y + i);
		cout << (char)b[4];
		gotoxy(x + length + 1, y + i);
		cout << (char)b[4];
	}
	y += i;

	//틀 맨아래
	gotoxy(x, y);
	cout << (char)b[2];
	for (i = 0; i < length; i++) {
		cout << (char)b[5];
	}
	cout << (char)b[3] << endl;
}