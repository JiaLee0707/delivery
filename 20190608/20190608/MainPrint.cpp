#include "Print.h"
#include "mainPrint.h"
#include "Signin.h"
#include <iostream>
#include <windows.h>
#include <string>
#include<fstream>

void mainPrint::title() {
	//��޾
	gotoxy(5, 4);
	cout << "  ��    ��  ��    ��     �������    ��        �����      ��      ���  ���  ��  ��        ����" << endl;
	gotoxy(5, 5);
	cout << "  ��    ��  ��    ��     ��              ����  ��        ��    ��      ��    ��    ��  ��      ��      ��" << endl;
	gotoxy(5, 6);
	cout << "  ��    ��  ��    ��     ��              ��      ��        ��    ��      ��    ��    ��  ��              ��" << endl;
	gotoxy(5, 7);
	cout << "  �����  ��    ��     ��������  ��      ��        �����      ��    ��    ��  ��            ��" << endl;
	gotoxy(5, 8);
	cout << "  ��    ��  �����                     ��      ��        ��    ��      ��    ��    ����          ��" << endl;
	gotoxy(5, 9);
	cout << "  ��    ��  ��    ��       ���������      ��        ��    ��      ��    ��    ��  ��          ��" << endl;
	gotoxy(5, 10);
	cout << "  ��    ��  ��    ��                     ��      ��        ��    ��      ��    ��    ��  ��" << endl;
	gotoxy(5, 11);
	cout << "  ��    ��  ��    ��       ���������      ��        ��    ��      ��    ��    ��  ��          ��" << endl;
	gotoxy(5, 12);
	cout << "  �����  ��    ��       ��                      �����      ��      ��������  ��          ��" << endl;
	gotoxy(5, 13);
	cout << "            ��    ��       ���������                      ��                  ��  ��" << endl;

	//�α��� ȸ������ ����
	string a;
	gotoxy(47, 17);
	cout << "�α��� \t ȸ������";
	gotoxy(52, 20);
	cin >> a;
	if (a == "�α���") {

	}
	else if (a == "ȸ������") {
		system("cls");
		Signin sign;

	}
};