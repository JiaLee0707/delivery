#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y) {
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main() {
	int money = 0;
	//배열에 틀(특수문자)넣기
	unsigned char b[7];
	for (int i = 0; i < 6; i++) {
		b[i] = i + 1;
	}
	//틀 맨위
	gotoxy(3, 2);
	cout << (char)b[0];
	for (int i = 0; i < 110; i++) {
		cout << (char)b[5];
	}
	cout << (char)b[1];

	//틀 중간
	for (int i = 0; i < 24; i++) {
		gotoxy(3, 3 + i);
		cout << (char)b[4];
		gotoxy(114, 3 + i);
		cout << (char)b[4];
	}
	//배달어때
	gotoxy(5, 4);
	cout << "  ■    ■  ■    ■     ■■■■■■    ■        ■■■■      ■      ■■  ■■  ■  ■        ■■■    " << endl;
	gotoxy(5, 5);
	cout << "  ■    ■  ■    ■     ■              ■■■  ■        ■    ■      ■    ■    ■  ■      ■      ■  " << endl;
	gotoxy(5, 6);
	cout << "  ■    ■  ■    ■     ■              ■      ■        ■    ■      ■    ■    ■  ■              ■  " << endl;
	gotoxy(5, 7);
	cout << "  ■■■■  ■    ■     ■■■■■■■  ■      ■        ■■■■      ■    ■    ■  ■            ■    " << endl;
	gotoxy(5, 8);
	cout << "  ■    ■  ■■■■                     ■      ■        ■    ■      ■    ■    ■■■          ■      " << endl;
	gotoxy(5, 9);
	cout << "  ■    ■  ■    ■       ■■■■■■■■      ■        ■    ■      ■    ■    ■  ■          ■      " << endl;
	gotoxy(5, 10);
	cout << "  ■    ■  ■    ■                     ■      ■        ■    ■      ■    ■    ■  ■                  " << endl;
	gotoxy(5, 11);
	cout << "  ■    ■  ■    ■       ■■■■■■■■      ■        ■    ■      ■    ■    ■  ■          ■      " << endl;
	gotoxy(5, 12);
	cout << "  ■■■■  ■    ■       ■                      ■■■■      ■      ■■■■■■■  ■          ■      " << endl;
	gotoxy(5, 13);
	cout << "            ■    ■       ■■■■■■■■                      ■                  ■  ■                  " << endl;

	gotoxy(3, 26);
	cout << (char)b[2];
	for (int i = 0; i < 110; i++) {
		cout << (char)b[5];
	}
	cout << (char)b[3];

	do
	{
		gotoxy(37, 17);
		cout << "입금하실 돈을 입력해주세요 : ";
		gotoxy(67, 17);
		cin >> money;
		if (money <= 0) {
			gotoxy(67, 18);
			cout << "돈이 0원보다 작거나 같습니다." << endl << endl;
		}
	} while (money <= 0);
	cout << "\n\n\n\n\n\n\n\n\n";
	//system("cls");
	return 0;
}