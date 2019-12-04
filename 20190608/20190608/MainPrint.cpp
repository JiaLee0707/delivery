#include "Print.h"
#include "mainPrint.h"
#include "Signin.h"
#include "chose1.h"
#include <iostream>
#include <windows.h>
#include <string>
#include<fstream>
#include <conio.h>
#define UP 72
#define DOWN 80
#define SUBMIT 13

int x = 50;
int y = 18;

void mainPrint::title() {
	//배달어때
	gotoxy(5, 4);
	cout << "  ■    ■  ■    ■     ■■■■■■    ■        ■■■■      ■      ■■  ■■  ■  ■        ■■■" << endl;
	gotoxy(5, 5);
	cout << "  ■    ■  ■    ■     ■              ■■■  ■        ■    ■      ■    ■    ■  ■      ■      ■" << endl;
	gotoxy(5, 6);
	cout << "  ■    ■  ■    ■     ■              ■      ■        ■    ■      ■    ■    ■  ■              ■" << endl;
	gotoxy(5, 7);
	cout << "  ■■■■  ■    ■     ■■■■■■■  ■      ■        ■■■■      ■    ■    ■  ■            ■" << endl;
	gotoxy(5, 8);
	cout << "  ■    ■  ■■■■                     ■      ■        ■    ■      ■    ■    ■■■          ■" << endl;
	gotoxy(5, 9);
	cout << "  ■    ■  ■    ■       ■■■■■■■■      ■        ■    ■      ■    ■    ■  ■          ■" << endl;
	gotoxy(5, 10);
	cout << "  ■    ■  ■    ■                     ■      ■        ■    ■      ■    ■    ■  ■" << endl;
	gotoxy(5, 11);
	cout << "  ■    ■  ■    ■       ■■■■■■■■      ■        ■    ■      ■    ■    ■  ■          ■" << endl;
	gotoxy(5, 12);
	cout << "  ■■■■  ■    ■       ■                      ■■■■      ■      ■■■■■■■  ■          ■" << endl;
	gotoxy(5, 13);
	cout << "            ■    ■       ■■■■■■■■                      ■                  ■  ■" << endl;

	//로그인 회원가입 선택	
	string a;

	gotoxy(x, y);
	cout << "로그인";
	gotoxy(x, y + 1);
	cout << "회원가입";

	int chk = Check();

	if (chk == 1) {
		system("cls");
		chose1 c1;
	}
	else if (chk == 2) {
		system("cls");
		Signin sign;
	}
};

int mainPrint::Check() {
	char c;
	while (1) {
		if (_kbhit()) {               // 2. while문안에서 키보드 눌렸을 시 if문이 실행된다.
			c = _getch();           // 3. 방향키가 입력됬을 때 224 00 이 버퍼에 있다. 224부터 빼준다. 
			if (c == -32) {           // 4. -32로 입력되면
				c = _getch();
				//cout << (int)c << " ";// 5. 뒤의 값 00을 판별하여 좌우상하 출력
				switch ((int)c) {
				case UP:
					if (y > 18) {
						gotoxy(x - 2, y);
						cout << " ";
						gotoxy(x - 2, --y);
						cout << ">";
					}
					//return 1;
					break;
				case DOWN:
					if (y < 19) {
						gotoxy(x - 2, y);
						cout << " ";
						gotoxy(x - 2, ++y);
						cout << ">";
					}
					//return 2;
					break;
				} // switch
			} // if -32
			else if (c == SUBMIT) {
				if (y == 18) {
					return 1;
				}
				else if (y == 19) {
					return 2;
				}
			}
		} // if kbhit
	}// while
}