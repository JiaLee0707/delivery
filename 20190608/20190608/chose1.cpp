#include "Print.h"
#include "chose1.h"
#include "MenuInfo.h"
#include <iostream>
#include <windows.h>
using namespace std;

int SquareGap_x = 18, SquareGap_y = 3;
int FoodGap_x = 29, FoodGap_y = 5;

void chose1::PrintChicken(int x, int y) {
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
void chose1::PrintPizza(int x, int y) {
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
	gotoxy(78, y + 2);
	cout << "2. ����";
	gotoxy(78, y + 3);
	cout << "13,000��";
}
void chose1::PrintCoffee(int x, int y) {
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
void chose1::PrintOne(int x, int y) {
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
	gotoxy(78, y + 1);
	cout << "4. 1�κ�";
	gotoxy(78, y + 2);
	cout << "7,000��";
}
void chose1::PrintTakeout(int x, int y) {
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
	gotoxy(33, y + 4);
	cout << "5. ����ũ�ƿ�";
	gotoxy(33, y + 5);
	cout << "11,000��";
}
void chose1::PrintRanking(int x, int y) {
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
	gotoxy(77, y + 3);
	cout << "6. ������ŷ";
	gotoxy(77, y + 4);
	cout << "17,500��";
}
chose1::chose1() {
	gotoxy(54, 1);
	cout << "���� ī�װ�" << endl;

	//�簢��
	for (int i = 0; i < 3; i++, SquareGap_y += 22) {
		Rectangle(SquareGap_x, SquareGap_y, 40, 20);
		Rectangle(SquareGap_x + 43, SquareGap_y, 40, 20);
	}

	//����
	PrintChicken(FoodGap_x, FoodGap_y);
	PrintPizza(FoodGap_x + 35, FoodGap_y + 2);
	PrintCoffee(FoodGap_x - 7, FoodGap_y + 23);
	PrintOne(FoodGap_x + 43, FoodGap_y + 22);
	PrintTakeout(FoodGap_x - 7, FoodGap_y + 48);
	PrintRanking(FoodGap_x + 37, FoodGap_y + 47);

	int num; //�ֹ���ȣ��
	gotoxy(FoodGap_x - 7, FoodGap_y + 65);
	cout << "�ֹ� ��ȣ�� �Է��ϼ��� : ";
	cin >> num;
	system("cls");
	MenuInfo m;
	m.menuInfo(num);


	getchar();
	getchar();
	getchar();
	//gotoxy(0, SquareGap_y++);
	//cout << SquareGap_y++;
}