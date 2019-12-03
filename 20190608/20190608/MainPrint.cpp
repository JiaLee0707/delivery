#include "Print.h"
#include "mainPrint.h"
#include "Signin.h"
#include <iostream>
#include <windows.h>
#include <string>
#include<fstream>

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
	gotoxy(47, 17);
	cout << "로그인 \t 회원가입";
	gotoxy(52, 20);
	cin >> a;
	if (a == "로그인") {

	}
	else if (a == "회원가입") {
		system("cls");
		Signin sign;

	}
};