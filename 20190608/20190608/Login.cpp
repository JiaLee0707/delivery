#include "mainPrint.h"
#include "chose1.h"
#include "Login.h"
#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>
#include <iterator>
using namespace std;

Login::Login() {
	string input_line1, input_line2; //���� ���̵�, ��й�ȣ �Է¹���
	string in_line, in_signin; //���̵�, ��й�ȣ �񱳿�
	int input_num; //�������� ȸ�����԰� �մ� ȸ�������� ���� �з���

	ifstream input1;
	ifstream input2;

	cout << "\n1. ��������  2. �մ� : ";
	cin >> input_num;
	cout << "\n";
	while (1) {
		char chk = NULL;
		if (input_num == 1) {
			input1.open("ShopMember.txt", ios::app);
			ifstream in("ShopSignin.txt");
			cout << "���̵� �Է� : ";
			cin >> input_line1;
			cout << "��й�ȣ �Է� : ";
			cin >> input_line2;

			in_line = input_line1 + " " + input_line2;
			while (getline(in, in_signin)) {
				if (in_line.compare(in_signin) != 0) {
					cout << "�α��� ����" << endl;
					cout << "�ٽ�? Ÿ�̺�? (y, n) : ";
					cin >> chk;
					getchar();
					//cout << "\n";
					break;
				}
				else {
					cout << "�α��� �Ϸ�" << endl;
					break;
				}
			}
			if (chk == 'y') {
				continue;
			}
			else if (chk == 'n') {
				GoMain();
			}
			else {
				break;
			}
		}
		else if (input_num == 2) {
			input2.open("GuestMember.txt", ios::app);
			ifstream in("GuestMember.txt");
			cout << "���̵� �Է� : ";
			cin >> input_line1;
			cout << "��й�ȣ �Է� : ";
			cin >> input_line2;

			in_line = input_line1 + " " + input_line2;
			while (getline(in, in_signin)) {
				if (in_line.compare(in_signin) != 0) {
					cout << "�α��� ����" << endl;
					cout << "�ٽ�? Ÿ�̺�? (y, n) : ";
					cin >> chk;
					getchar();
					//cout << "\n";
					break;
				}
				else {
					cout << "�α��� �Ϸ�" << endl;
					break;
				}
			}
			if (chk == 'y') {
				continue;
			}
			else if (chk == 'n') {
				GoMain();
			}
			else {
				break;
			}
		}
		else {
			GoMain();
		}
	}
	FinishCheck();
}
void Login::FinishCheck() {
	char finish;
	cout << "\n�޴��ֹ����� ���ðڽ��ϱ�? �ƹ�Ű�� ������ ����˴ϴ�. (Y/y) : ";
	cin >> finish;
	getchar();
	if (finish == 'y' || finish == 'Y') {
		system("cls");
		chose1 c1;
	}
	else {
		exit(0);
	}
}

void Login::GoMain() {
	system("cls");
	mainPrint mainP;
	mainP.Rectangle(3, 2, 110, 24);  //�簢�� �׸���
	mainP.title();					 //Ÿ��Ʋ ��
}