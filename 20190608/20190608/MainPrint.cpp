#include "Print.h"
#include "mainPrint.h"
#include "Signin.h"
#include <iostream>
#include <windows.h>
#include <string>
#include<fstream>
#include <conio.h>
#define UP 72
#define DOWN 80
#define SUBMIT 5

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
	
	/*if (chk == 1) {
	}
	else if (chk == 0) {
		system("cls");
		Signin sign;
	}*/
};

int mainPrint::Check() {
	char c;
	while (1) {
		if (_kbhit()) {               // 2. while���ȿ��� Ű���� ������ �� if���� ����ȴ�.
			c = _getch();           // 3. ����Ű�� �Է��� �� 224 00 �� ���ۿ� �ִ�. 224���� ���ش�. 
			if (c == -32) {           // 4. -32�� �ԷµǸ�
				c = getchar();  
				cout << (int)c << " ";// 5. ���� �� 00�� �Ǻ��Ͽ� �¿���� ���
				switch ((int)c) {
				case 27:
					if (y > 18) {
						gotoxy(x - 2, y);
						cout << " ";
						gotoxy(x - 2, --y);
						cout << ">";
					}
					break;
				case DOWN:
					if (y < 19) {
						gotoxy(x - 2, y);
						cout << " ";
						gotoxy(x - 2, ++y);
						cout << ">";
					}
					break;
				case '\n':
					cout << "�����ٶ�";
					break;
				} // switch
			} // if -32
		} // if kbhit
	}// while
}