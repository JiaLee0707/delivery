#include "Print.h"
#include "mainPrint.h"
#include <iostream>
#include <windows.h>
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

	//�� �Է�
	do
	{
		gotoxy(37, 17);
		cout << "�Ա��Ͻ� ���� �Է����ּ��� : ";
		gotoxy(67, 17);
		cin >> money;
		if (money <= 0) {
			gotoxy(67, 18);
			cout << "���� 0������ �۰ų� �����ϴ�." << endl << endl;
		}
	} while (money <= 0);

};