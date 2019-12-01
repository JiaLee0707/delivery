#include <iostream>
#include <windows.h>
using namespace std;

int SquareGap_x = 19, SquareGap_y = 3;
int FoodGap_x = 29, FoodGap_y = 5;

void gotoxy(int x, int y) {
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
void PrintSquare(int x, int y) {
	unsigned char b[6];
	for (int i = 0; i < 6; i++)
		b[i] = i + 1;

	// �簢�� ��
	gotoxy(x, y++);
	cout << b[0];
	for (int i = 1; i < 40; i++) {
		cout << b[5];
	}
	cout << b[1] << endl;

	// �簢�� ��
	for (int i = 1; i < 20; i++) {
		gotoxy(x, y++);
		cout << b[4];
		for (int j = 1; j < 40; j++)
			cout << " ";
		cout << b[4] << endl;
	}

	// �簢�� �Ʒ�
	gotoxy(x, y++);
	cout << b[2];
	for (int i = 1; i < 40; i++) {
		cout << b[5];
	}
	cout << b[3] << endl;;

}

void PrintChicken(int x, int y) {
	gotoxy(x++, y++);
	cout << "       ������\n";
	gotoxy(x, y++);
	cout << "    ��������\n";
	gotoxy(x, y++);
	cout << "   ���������\n";
	gotoxy(x, y++);
	cout << "  ����������\n";
	gotoxy(x, y++);
	cout << "  ����������\n";
	gotoxy(x, y++);
	cout << "  ����������\n";
	gotoxy(x, y++);
	cout << "  ����������\n";
	gotoxy(x, y++);
	cout << "  ���������\n";
	gotoxy(x, y++);
	cout << "  ��������\n";
	gotoxy(x, y++);
	cout << "   ������\n";
	gotoxy(x, y++);
	cout << "    ����\n";
	gotoxy(x, y++);
	cout << "   ����\n";
	gotoxy(x, y++);
	cout << "  ����\n";
	gotoxy(x, y++);
	cout << " �����\n";
	gotoxy(x, y++);
	cout << "���  ���\n";
	gotoxy(36, y + 1);
	cout << "1. ġŲ";
	gotoxy(36, y + 2);
	cout << "15,000��";
}

void PrintPizza(int x, int y) {
	gotoxy(x++, y++);
	cout << "        ����" << endl;
	gotoxy(x, y++);
	cout << "     �������" << endl;
	gotoxy(x, y++);
	cout << "    ��������" << endl;
	gotoxy(x, y++);
	cout << "   ����������" << endl;
	gotoxy(x, y++);
	cout << "  �����������" << endl;
	gotoxy(x, y++);
	cout << " ������������" << endl;
	gotoxy(x, y++);
	cout << "��������������" << endl;
	gotoxy(x, y++);
	cout << "���������������" << endl;
	gotoxy(x, y++);
	cout << "����������������" << endl;
	gotoxy(x, y++);
	cout << " �����������������" << endl;
	gotoxy(x, y++);
	cout << "  �����������������" << endl;
	gotoxy(x, y++);
	cout << "    �����������������" << endl;
	gotoxy(76, y + 2);
	cout << "2. ����";
	gotoxy(76, y + 3);
	cout << "13,000��";
}

void PrintCoffee(int x, int y) {
	gotoxy(x++, y++);
	cout << "     ����������" << endl;
	gotoxy(x, y++);
	cout << " ��  ���������  ��" << endl;
	gotoxy(x, y++);
	cout << "��������������" << endl;
	gotoxy(x, y++);
	cout << " �������������" << endl;
	gotoxy(x, y++);
	cout << "   �����������  �����" << endl;
	gotoxy(x, y++);
	cout << " ��                   ���      ��" << endl;
	gotoxy(x, y++);
	cout << " ��                    ��       ��" << endl;
	gotoxy(x, y++);
	cout << " ��                    ��       ��" << endl;
	gotoxy(x, y++);
	cout << " ��                    ��       ��" << endl;
	gotoxy(x, y++);
	cout << " ��                    ��       ��" << endl;
	gotoxy(x, y++);
	cout << " ��                    ��       ��" << endl;
	gotoxy(x, y++);
	cout << " ��                   ���      ��" << endl;
	gotoxy(x, y++);
	cout << "  ��                 ��  �����" << endl;
	gotoxy(x, y++);
	cout << "   ����������" << endl;
	gotoxy(36, y + 1);
	cout << "3. ī��";
	gotoxy(36, y + 2);
	cout << "12,000��";
}
void PrintOne(int x, int y) {
	gotoxy(x++, y++);
	cout << "          ���" << endl;
	gotoxy(x, y++);
	cout << "       ����" << endl;
	gotoxy(x, y++);
	cout << "     �����" << endl;
	gotoxy(x, y++);
	cout << "   ������" << endl;
	gotoxy(x, y++);
	cout << "���   ����" << endl;
	gotoxy(x, y++);
	cout << "       ����" << endl;
	gotoxy(x, y++);
	cout << "       ����" << endl;
	gotoxy(x, y++);
	cout << "       ����" << endl;
	gotoxy(x, y++);
	cout << "       ����" << endl;
	gotoxy(x, y++);
	cout << "       ����" << endl;
	gotoxy(x, y++);
	cout << "       ����" << endl;
	gotoxy(x, y++);
	cout << "       ����" << endl;
	gotoxy(x, y++);
	cout << "       ����" << endl;
	gotoxy(x, y++);
	cout << "       ����" << endl;
	gotoxy(x, y++);
	cout << " ����������" << endl;
	gotoxy(76, y + 1);
	cout << "4. 1�κ�";
	gotoxy(76, y + 2);
	cout << "7,000��";
}
void PrintTakeout(int x, int y) {
	gotoxy(x++, y++);
	cout << " ��������    ������   ��" << endl;
	gotoxy(x, y++);
	cout << "  ��      ��             ��    ��" << endl;
	gotoxy(x, y++);
	cout << "  ��      ��           ��      ���" << endl;
	gotoxy(x, y++);
	cout << "��������       ��  ��    ��" << endl;
	gotoxy(x, y++);
	cout << "      ��           ��      ��  ��" << endl;
	gotoxy(x, y++);
	cout << "      ��                �����" << endl;
	gotoxy(x, y++);
	cout << "��������        ��       ��" << endl;
	gotoxy(x, y++);
	cout << "                        �����" << endl;
	gotoxy(33, y + 3);
	cout << "5. ����ũ�ƿ�";
	gotoxy(33, y + 4);
	cout << "11,000��";
}
void PrintRanking(int x, int y) {
	gotoxy(x++, y++);
	cout << "               ��" << endl;
	gotoxy(x, y++);
	cout << "             ���" << endl;
	gotoxy(x, y++);
	cout << "��          ����          ��" << endl;
	gotoxy(x, y++);
	cout << "���       �����       ���" << endl;
	gotoxy(x, y++);
	cout << "����    ������    ����" << endl;
	gotoxy(x, y++);
	cout << "����������������" << endl;
	gotoxy(x, y++);
	cout << "����������������" << endl;
	gotoxy(x, y++);
	cout << "����������������" << endl;
	gotoxy(x, y++);
	cout << "����������������" << endl;
	gotoxy(x, y++);
	cout << "����������������" << endl;
	gotoxy(75, y + 2);
	cout << "6. ������ŷ";
	gotoxy(75, y + 3);
	cout << "17,500��";
}
int main() {
	gotoxy(54, 1);
	cout << "���� ī�װ�" << endl;

	//�簢��
	for (int i = 0; i < 3; i++, SquareGap_y += 21) {
		PrintSquare(SquareGap_x, SquareGap_y);
		PrintSquare(SquareGap_x + 41, SquareGap_y);
	}

	//����
	PrintChicken(FoodGap_x, FoodGap_y);
	PrintPizza(FoodGap_x + 32, FoodGap_y + 2);
	PrintCoffee(FoodGap_x - 7, FoodGap_y + 22);
	PrintOne(FoodGap_x + 41, FoodGap_y + 21);
	PrintTakeout(FoodGap_x - 7, FoodGap_y + 46);
	PrintRanking(FoodGap_x + 36, FoodGap_y + 45);

	gotoxy(0, SquareGap_y++);
	return 0;
}