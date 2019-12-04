#include "mainPrint.h"
#include "Signin.h"
#include "chose1.h"
#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>
using namespace std;

Signin::Signin() {
	char chk;
	string out_line1, out_line2; //���� ���̵�, ��й�ȣ �Է¹���
	string out_line, out_signin; //���̵�, ��й�ȣ �񱳿�
	int out_num; //�������� ȸ�����԰� �մ� ȸ�������� ���� �з���

	ofstream out1;
	ofstream out2;

	cout << "\n1. ��������  2. �մ� : ";
	cin >> out_num;
	cout << "\n";
	if (out_num == 1) {
		out1.open("ShopSignin.txt", ios::app);

		cout << "���̵� �Է� : ";
		cin >> out_line1;
		cout << "��й�ȣ �Է� : ";
		cin >> out_line2;

		out1 << out_line1 << " ";
		out1 << out_line2 << endl;

		out1.close();
	}
	else if (out_num == 2) {
		out2.open("GuestSignin.txt", ios::app);

		cout << "���̵� �Է� : ";
		cin >> out_line1;
		cout << "��й�ȣ �Է� : ";
		cin >> out_line2;

		out2 << out_line1 << " ";
		out2 << out_line2 << endl;

		out2.close();
	}
	else {
		GoMain();
	}
	cout << "\nȸ�������� �Ϸ�Ǿ����ϴ�. \n������ Ȯ���Ͻðڽ��ϱ�? (y) : ";
	cin >> chk;
	getchar();
	cout << "\n";
	if (chk == 'y' && out_num == 1) {
		ifstream in("ShopSignin.txt");
		out_line = out_line1 + " " + out_line2;
		while (getline(in, out_signin)) {
			if (out_line.compare(out_signin) == 0) {
				cout << out_line << endl;
				break;
			}
		}
		in.close();
		FinishCheck();
	}
	else if (chk == 'y' && out_num == 2) {
		ifstream in("GuestSignin.txt");
		out_line = out_line1 + " " + out_line2;
		while (getline(in, out_signin)) {
			if (out_line.compare(out_signin) == 0) {
				cout << out_line << endl;
				break;
			}
		}
		in.close();
		FinishCheck();
	}
	else {
		system("cls");
		chose1 c1;
	}
}

void Signin::FinishCheck() {
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

void Signin::GoMain() {
	system("cls");
	mainPrint mainP;
	mainP.Rectangle(3, 2, 110, 24);  //�簢�� �׸���
	mainP.title();					 //Ÿ��Ʋ ��
}