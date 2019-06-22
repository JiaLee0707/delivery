#include <iostream>
#include <windows.h>
using namespace std;

#include <windows.h>
void gotoxy(int x, int y) {
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main() {
	int money = 0;
	unsigned char b[7];
	for (int i = 0; i < 6; i++) {
		b[i] = i + 1;
	}
	gotoxy(4, 3);
	cout << (char)b[0];
	for (int i = 0; i < 110; i++) {
		cout << (char)b[5];
	}
	cout << (char)b[1];
	gotoxy(4, 4);
	for (int i = 0; i < 25; i++) {
		cout << (char)b[4];
		/*for (int j = 1; j < 111; j++) {
			cout << " ";
		}*/
		gotoxy(5, 5);
		cout << "  ■    ■  ■    ■      ■■■■■■    ■        ■■■■      ■      ■■  ■■  ■  ■        ■■■    " << endl;
		gotoxy(5, 6);
		cout << "  ■    ■  ■    ■      ■              ■■■  ■        ■    ■      ■    ■    ■  ■      ■      ■  " << endl;
		gotoxy(5, 7);
		cout << "  ■    ■  ■    ■      ■              ■      ■        ■    ■      ■    ■    ■  ■              ■  " << endl;
		gotoxy(5, 8);
		cout << "  ■■■■  ■    ■      ■■■■■■■  ■      ■        ■■■■      ■    ■    ■  ■            ■    " << endl;
		gotoxy(5, 9);
		cout << "  ■    ■  ■■■■                      ■      ■        ■    ■      ■    ■    ■■■          ■      " << endl;
		gotoxy(5, 10);
		cout << "  ■    ■  ■    ■        ■■■■■■■■      ■        ■    ■      ■    ■    ■  ■          ■      " << endl;
		gotoxy(5, 11);
		cout << "  ■    ■  ■    ■                      ■      ■        ■    ■      ■    ■    ■  ■                  " << endl;
		gotoxy(5, 12);
		cout << "  ■    ■  ■    ■        ■■■■■■■■      ■        ■    ■      ■    ■    ■  ■          ■      " << endl;
		gotoxy(5, 13);
		cout << "  ■■■■  ■    ■        ■                      ■■■■      ■      ■■■■■■■  ■          ■      " << endl;
		gotoxy(5, 14);
		cout << "            ■    ■        ■■■■■■■■                      ■                  ■  ■                  " << endl;
		gotoxy(5, 15);
		do
		{
			cout << "입금하실 돈을 입력해주세요 : ";
			cin >> money;
			if (money <= 0)
				cout << "돈이 0원보다 작거나 같습니다." << endl << endl;
		} while (money <= 0);
		cout << (char)b[4];
		gotoxy(4, 4 + i);
	}
	gotoxy(4, 26);
	cout << (char)b[2];
	for (int i = 0; i < 110; i++) {
		cout << (char)b[5];
	}
	cout << (char)b[3];
}