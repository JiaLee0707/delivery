#include <iostream>
#include <windows.h>
using namespace std;

void DisplayPrint();

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
	//Ʋ �߰�
	gotoxy(3, 3);
	cout << (char)b[0];
	for (int i = 0; i < 110; i++) {
		cout << (char)b[5];
	}
	cout << (char)b[1];
	gotoxy(3, 4);
	for (int i = 0; i < 25; i++) {
		cout << (char)b[4];
		DisplayPrint();
		do
		{
			cout << "�Ա��Ͻ� ���� �Է����ּ��� : ";
			cin >> money;
			if (money <= 0)
				cout << "���� 0������ �۰ų� �����ϴ�." << endl << endl;
		} while (money <= 0);
		cout << (char)b[4];
		gotoxy(4, 4 + i);
	}
	gotoxy(3, 26);
	cout << (char)b[2];
	for (int i = 0; i < 110; i++) {
		cout << (char)b[5];
	}
	cout << (char)b[3];
}

void DisplayPrint() {
	gotoxy(5, 5);
	cout << "  ��    ��  ��    ��      �������    ��        �����      ��      ���  ���  ��  ��        ����    " << endl;
	gotoxy(5, 6);
	cout << "  ��    ��  ��    ��      ��              ����  ��        ��    ��      ��    ��    ��  ��      ��      ��  " << endl;
	gotoxy(5, 7);
	cout << "  ��    ��  ��    ��      ��              ��      ��        ��    ��      ��    ��    ��  ��              ��  " << endl;
	gotoxy(5, 8);
	cout << "  �����  ��    ��      ��������  ��      ��        �����      ��    ��    ��  ��            ��    " << endl;
	gotoxy(5, 9);
	cout << "  ��    ��  �����                      ��      ��        ��    ��      ��    ��    ����          ��      " << endl;
	gotoxy(5, 10);
	cout << "  ��    ��  ��    ��        ���������      ��        ��    ��      ��    ��    ��  ��          ��      " << endl;
	gotoxy(5, 11);
	cout << "  ��    ��  ��    ��                      ��      ��        ��    ��      ��    ��    ��  ��                  " << endl;
	gotoxy(5, 12);
	cout << "  ��    ��  ��    ��        ���������      ��        ��    ��      ��    ��    ��  ��          ��      " << endl;
	gotoxy(5, 13);
	cout << "  �����  ��    ��        ��                      �����      ��      ��������  ��          ��      " << endl;
	gotoxy(5, 14);
	cout << "            ��    ��        ���������                      ��                  ��  ��                  " << endl;
	gotoxy(5, 15);
}