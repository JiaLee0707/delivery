#include <iostream>
#include <windows.h>
#define HOWFAR (6)
#define CHICKEN_W (4) // ���������� ��ŭ ����������
#define CHICKEN_H (11) //������ �󸶳� ����������
#define PIZZA_W (6) // ���������� ��ŭ ����������
#define PIZZA_H (48) //������ �󸶳� ����������

using namespace std;

void gotoxy(int x, int y) {
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void PrintSquare() {
	unsigned char b[6];
	for (int i = 0; i < 6; i++)
		b[i] = i + 1;

	// �簢��1 �� �κ�
	cout << b[0];
	for (int i = 1; i < 40; i++) {
		cout << b[5];
	}
	cout << b[1];
	
	// �簢�� ������ �Ÿ�
	for (int i = 1; i < HOWFAR; i++) {
		cout << " ";
	}

	// �簢��2 �� �κ�
	cout << b[0];
	for (int i = 1; i < 40; i++) {
		cout << b[5];
	}
	cout << b[1] << endl;


	for (int i = 1; i < 20; i++) {
		// �簢��1 �� �κ� �� ��
		cout << b[4];
		for (int j = 1; j < 40; j++)
			cout << " ";
		cout << b[4];

		// �簢�� ������ �Ÿ�
		for (int h = 1; h < HOWFAR; h++) {
			cout << " ";
		}

		cout << b[4];
		for (int j = 1; j < 40; j++)
			cout << " ";
		cout << b[4] << endl;
	}

	cout << b[2];
	for (int i = 1; i < 40; i++) {
		cout << b[5];
	}
	cout << b[3];
	// �簢�� ������ �Ÿ�
	for (int h = 1; h < HOWFAR; h++) {
		cout << " ";
	}
	cout << b[2];
	for (int i = 1; i < 40; i++) {
		cout << b[5];
	}
	cout << b[3] << "\n";
}

void PrintChicken() {
	gotoxy(CHICKEN_H, CHICKEN_W);
	cout << "�����\n";
	gotoxy(CHICKEN_H, CHICKEN_W + 1);
	cout << "��������\n";
	gotoxy(CHICKEN_H, CHICKEN_W + 2);
	cout << "����������\n";
	gotoxy(CHICKEN_H, CHICKEN_W + 3);
	cout << "����������\n";
	gotoxy(CHICKEN_H, CHICKEN_W + 4);
	cout << "����������\n";
	gotoxy(CHICKEN_H, CHICKEN_W + 5);
	cout << "����������\n";
	gotoxy(CHICKEN_H, CHICKEN_W + 6);
	cout << "����������\n";
	gotoxy(CHICKEN_H, CHICKEN_W + 7);
	cout << "��������\n";
	gotoxy(CHICKEN_H, CHICKEN_W + 8);
	cout << "�������\n";
	gotoxy(CHICKEN_H, CHICKEN_W + 9);
	cout << "������\n";
	gotoxy(CHICKEN_H, CHICKEN_W + 10);
	cout << "����\n";
	gotoxy(CHICKEN_H, CHICKEN_W + 11);
	cout << "����\n";
	gotoxy(CHICKEN_H, CHICKEN_W + 12);
	cout << "����\n";
	gotoxy(CHICKEN_H, CHICKEN_W + 13);
	cout << "�������\n";
	gotoxy(CHICKEN_H, CHICKEN_W + 14);
	cout << "���       ���\n";
	gotoxy(CHICKEN_H+5, CHICKEN_W+16);
	cout << "1. ġŲ";
}

void PrintPizza() {
	gotoxy(PIZZA_H, PIZZA_W);
	cout << "����" << endl;
	gotoxy(PIZZA_H, PIZZA_W+1);
	cout << "������" << endl;
	gotoxy(PIZZA_H, PIZZA_W + 2);
	cout << "��������" << endl;
	gotoxy(PIZZA_H, PIZZA_W + 3);
	cout << "�����������" << endl;
	gotoxy(PIZZA_H, PIZZA_W + 4);
	cout << "�������������" << endl;
	gotoxy(PIZZA_H, PIZZA_W + 5);
	cout << "���������������" << endl;
	gotoxy(PIZZA_H, PIZZA_W + 6);
	cout << "�����������������" << endl;
	gotoxy(PIZZA_H, PIZZA_W + 7);
	cout << "�������������������" << endl;
	gotoxy(PIZZA_H, PIZZA_W + 8);
	cout << "�������������������" << endl;
	gotoxy(PIZZA_H, PIZZA_W + 9);
	cout << "�������������������" << endl;
	gotoxy(PIZZA_H, PIZZA_W + 10);
	cout << "�������������������" << endl;
	gotoxy(PIZZA_H + 14, PIZZA_W + 14);
	cout << "2. ����";
}

int main() {
	cout <<"\n��� ������ �������ּ���! " << endl;
	
	PrintSquare();
	PrintSquare();
	PrintSquare();
	PrintSquare();
	PrintChicken();
	PrintPizza();
	gotoxy(0, 100);
	return 0;
}