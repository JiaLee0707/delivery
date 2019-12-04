#include "Print.h"
#include "chose1.h"
#include "MenuInfo.h"
#include "Receipt.h"
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>
#include <fstream>

const int UP = 72;
const int DOWN = 80;
const int SUBMIT = 13;
Print p;

void MenuInfo::menuInfo(int num) {
	switch (num) {
	case 1: {
		string in_line1;
		ifstream in1("Chicken.txt");
		while (getline(in1, in_line1)) {
			cout << in_line1 << endl;
		}
		in1.close();
	}
			break;

	case 2: {
		string in_line1;
		ifstream in1("Pizza.txt");
		while (getline(in1, in_line1)) {
			cout << in_line1 << endl;
		}
		in1.close();
	}
			break;

	case 3: {
		string in_line1;
		ifstream in1("Cafe.txt");
		while (getline(in1, in_line1)) {
			cout << in_line1 << endl;
		}
		in1.close();
	}
			break;

	case 4: {
		string in_line1;
		ifstream in1("ForOne.txt");
		while (getline(in1, in_line1)) {
			cout << in_line1 << endl;
		}
		in1.close();
	}
			break;

	case 5: {
		string in_line1;
		ifstream in1("Delivery.txt");
		while (getline(in1, in_line1)) {
			cout << in_line1 << endl;
		}
		in1.close();
	}
			break;

	case 6: {
		string in_line1;
		ifstream in1("Rank.txt");
		while (getline(in1, in_line1)) {
			cout << in_line1 << endl;
		}
		in1.close();
	}
			break;

	default:
		cout << "잘못입력하셨습니다. 메뉴판 화면으로 돌아갑니다.";
		system("cls");
		chose1 c1;
	}

	p.gotoxy(4, 25);
	cout << "> 주문하기";
	p.gotoxy(5, 25 + 1);
	cout << "취소하기";

	int chk = Order();

	if (chk == 1) {
		system("cls");
		Receipt r;
		r.Rprint(num);
	}
	else if (chk == 2) {
		system("cls");
		chose1 c1;
	}
}


int MenuInfo::Order() {
	int x = 3;
	int y = 25;
	char c;
	while (1) {
		if (_kbhit()) {               // 2. while문안에서 키보드 눌렸을 시 if문이 실행된다.
			c = _getch();           // 3. 방향키가 입력됬을 때 224 00 이 버퍼에 있다. 224부터 빼준다. 
			if (c == -32) {           // 4. -32로 입력되면
				c = _getch();
				//cout << (int)c << " ";// 5. 뒤의 값 00을 판별하여 좌우상하 출력
				switch ((int)c) {
				case UP:
					if (y > 25) {
						p.gotoxy(x - 2, y);
						cout << " ";
						p.gotoxy(x - 2, --y);
						cout << ">";
					}
					//return 1;
					break;
				case DOWN:
					if (y < 26) {
						p.gotoxy(x - 2, y);
						cout << " ";
						p.gotoxy(x - 2, ++y);
						cout << ">";
					}
					//return 2;
					break;
				} // switch
			} // if -32
			else if (c == SUBMIT) {
				if (y == 25) {
					return 1;
				}
				else if (y == 26) {
					return 2;
				}
			}
		} // if kbhit
	}// while
}