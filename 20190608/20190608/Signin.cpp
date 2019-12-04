#include "Print.h"
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
	string out_line1, out_line2; //각각 아이디, 비밀번호 입력받음
	int out_num; //매장주인 회원가입과 손님 회원가입을 따로 분류함

	ofstream out1;
	ofstream out2;

	cout << "\n1. 매장주인  2. 손님 : ";
	cin >> out_num;
	cout << "\n";
	if (out_num == 1) {
		out1.open("ShopSignin.txt", ios::app);

		cout << "아이디 입력 : ";
		cin >> out_line1;
		cout << "비밀번호 입력 : ";
		cin >> out_line2;

		out1 << out_line1 << " ";
		out1 << out_line2 << endl;

		out1.close();
	}
	else if (out_num == 2) {
		out2.open("GuestSignin.txt", ios::app);

		cout << "아이디 입력 : ";
		cin >> out_line1;
		cout << "비밀번호 입력 : ";
		cin >> out_line2;

		out2 << out_line1 << " ";
		out2 << out_line2 << endl;

		out2.close();
	}
	else {
		GoMain();
	}
	cout << "\n회원가입이 완료되었습니다. \n정보를 확인하시겠습니까? 아무키나 누르면 넘어갑니다. (y) : ";
	cin >> chk;
	getchar();
	cout << "\n";
	if (chk == 'y' && out_num == 1) {
		string in_line;
		ifstream in("ShopSignin.txt");
		while (getline(in, in_line)) {
			cout << in_line << endl;
		}
	}
	else if (chk == 'y' && out_num == 2) {
		string in_line1;
		ifstream in1("GuestSignin.txt");
		while (getline(in1, in_line1)) {
			cout << in_line1 << endl;
		}
		in1.close();
		FinishCheck();
	}
	else {
		system("cls");
		chose1 c1;
	}
}

void Signin::FinishCheck() {
	char finish;
	cout << "\n메뉴주문으로 가시겠습니까? 아무키나 누르면 종료됩니다. (Y/y) : ";
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
	mainP.Rectangle(3, 2, 110, 24);  //사각형 그리기
	mainP.title();					 //타이틀 명
}