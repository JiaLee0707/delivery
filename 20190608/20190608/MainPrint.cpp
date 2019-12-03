#include "Print.h"
#include "mainPrint.h"
#include <iostream>
#include <windows.h>
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

	//돈 입력
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

};