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

	gotoxy(x, y);
	cout << "�α���";
	gotoxy(x, y + 1);
	cout << "ȸ������";

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
		if (_kbhit()) {               // 2. while���ȿ��� Ű���� ������ �� if���� ����ȴ�.
			c = _getch();           // 3. ����Ű�� �Է��� �� 224 00 �� ���ۿ� �ִ�. 224���� ���ش�. 
			if (c == -32) {           // 4. -32�� �ԷµǸ�
				c = _getch();
				//cout << (int)c << " ";// 5. ���� �� 00�� �Ǻ��Ͽ� �¿���� ���
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