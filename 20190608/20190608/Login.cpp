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
	string input_line1, input_line2; //각각 아이디, 비밀번호 입력받음
	string in_line, in_signin; //아이디, 비밀번호 비교용
	int input_num; //매장주인 회원가입과 손님 회원가입을 따로 분류함

	ifstream input1;
	ifstream input2;

	cout << "\n1. 매장주인  2. 손님 : ";
	cin >> input_num;
	cout << "\n";
	while (1) {
		char chk = NULL;
		if (input_num == 1) {
			input1.open("ShopMember.txt", ios::app);
			ifstream in("ShopSignin.txt");
			cout << "아이디 입력 : ";
			cin >> input_line1;
			cout << "비밀번호 입력 : ";
			cin >> input_line2;

			in_line = input_line1 + " " + input_line2;
			while (getline(in, in_signin)) {
				if (in_line.compare(in_signin) != 0) {
					cout << "로그인 실패" << endl;
					cout << "다시? 타이블? (y, n) : ";
					cin >> chk;
					getchar();
					//cout << "\n";
					break;
				}
				else {
					cout << "로그인 완료" << endl;
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
			cout << "아이디 입력 : ";
			cin >> input_line1;
			cout << "비밀번호 입력 : ";
			cin >> input_line2;

			in_line = input_line1 + " " + input_line2;
			while (getline(in, in_signin)) {
				if (in_line.compare(in_signin) != 0) {
					cout << "로그인 실패" << endl;
					cout << "다시? 타이블? (y, n) : ";
					cin >> chk;
					getchar();
					//cout << "\n";
					break;
				}
				else {
					cout << "로그인 완료" << endl;
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

void Login::GoMain() {
	system("cls");
	mainPrint mainP;
	mainP.Rectangle(3, 2, 110, 24);  //사각형 그리기
	mainP.title();					 //타이틀 명
}