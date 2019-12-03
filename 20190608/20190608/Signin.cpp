#include "Print.h"
#include "mainPrint.h"
#include "Signin.h"
#include <iostream>
#include <windows.h>
#include <string>
#include<fstream>
using namespace std;

Signin::Signin() {
	char chk;
	string out_line1, out_line2; //���� ���̵�, ��й�ȣ �Է¹���
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

		out1<< out_line1 << " ";
		out1 << out_line2 << endl;

		out1.close();
	}
	else if(out_num == 2) {
		out2.open("GuestSignin.txt", ios::app);

		cout << "���̵� �Է� : ";
		cin >> out_line1;
		cout << "��й�ȣ �Է� : ";
		cin >> out_line2;

		out2 << out_line1 << " ";
		out2 << out_line2 << endl;

		out2.close();
	}
	cout << "\nȸ�������� �Ϸ�Ǿ����ϴ�. \n������ Ȯ���Ͻðڽ��ϱ�? (Y/y) : ";
	cin >> chk;
	getchar();
	cout << "\n";
	if (chk == 'y' || chk == 'Y' && out_num == 1) {
		string in_line;
		ifstream in("ShopSignin.txt");
		while (getline(in, in_line)) {
			cout << in_line << endl;
		}
		in.close();
		FinishCheck();
	}
	else if (chk == 'y' || chk == 'Y' && out_num == 2) {
		string in_line;
		ifstream in("GuestSignin.txt");
		while (getline(in, in_line)) {
			cout << in_line << endl;
		}
		in.close();
		FinishCheck();
	}
	else {
		GoMain();
	}
}

void Signin::FinishCheck() {
	char finish;
	cout << "\n����ȭ������ ���ðڽ��ϱ�? �ƹ�Ű�� ������ ����˴ϴ�. (Y/y) : ";
	cin >> finish;
	getchar();
	if (finish == 'y' || finish == 'Y') {
		GoMain();
	}
}

void Signin::GoMain() {
	system("cls");
	mainPrint mainP;
	mainP.Rectangle(3, 2, 110, 24);  //�簢�� �׸���
	mainP.title();					 //Ÿ��Ʋ ��
}