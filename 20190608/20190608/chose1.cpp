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
	cout << "       ■■■■■\n";
	gotoxy(x, y++);
	cout << "    ■■■■■■■\n";
	gotoxy(x, y++);
	cout << "   ■■■■■■■■\n";
	gotoxy(x, y++);
	cout << "  ■■■■■■■■■\n";
	gotoxy(x, y++);
	cout << "  ■■■■■■■■■\n";
	gotoxy(x, y++);
	cout << "  ■■■■■■■■■\n";
	gotoxy(x, y++);
	cout << "  ■■■■■■■■■\n";
	gotoxy(x, y++);
	cout << "  ■■■■■■■■\n";
	gotoxy(x, y++);
	cout << "  ■■■■■■■\n";
	gotoxy(x, y++);
	cout << "   ■□□□■\n";
	gotoxy(x, y++);
	cout << "    □□□\n";
	gotoxy(x, y++);
	cout << "   □□□\n";
	gotoxy(x, y++);
	cout << "  □□□\n";
	gotoxy(x, y++);
	cout << " □□□□\n";
	gotoxy(x, y++);
	cout << "□□  □□\n";
	gotoxy(36, y + 1);
	cout << "1. 치킨";
	gotoxy(36, y + 2);
	cout << "15,000원";
}
void chose1::PrintPizza(int x, int y) {
	gotoxy(x++, y++);
	cout << "        ■■■" << endl;
	gotoxy(x, y++);
	cout << "     ■■■□□□" << endl;
	gotoxy(x, y++);
	cout << "    ■■■■□□□" << endl;
	gotoxy(x, y++);
	cout << "   ■■■□□□□■□" << endl;
	gotoxy(x, y++);
	cout << "  ■■■□□■□□□□" << endl;
	gotoxy(x, y++);
	cout << " ■■■□□□□□□□□" << endl;
	gotoxy(x, y++);
	cout << "■■■□■□□□□□□■□" << endl;
	gotoxy(x, y++);
	cout << "■■■□□□□□□■□□□□" << endl;
	gotoxy(x, y++);
	cout << "■■■□□□■□□□□□■□□" << endl;
	gotoxy(x, y++);
	cout << " ■■□□□□□□□□□□□□■□" << endl;
	gotoxy(x, y++);
	cout << "  ■■□□□□■□□□□□□□□□" << endl;
	gotoxy(x, y++);
	cout << "    ■■□□□□□□□■□□□□□□" << endl;
	gotoxy(78, y + 2);
	cout << "2. 피자";
	gotoxy(78, y + 3);
	cout << "13,000원";
}
void chose1::PrintCoffee(int x, int y) {
	gotoxy(x++, y++);
	cout << "     □□□□□□□□□" << endl;
	gotoxy(x, y++);
	cout << " □  ■■■■■■■■  □" << endl;
	gotoxy(x, y++);
	cout << "□■■■■■■■■■■■□" << endl;
	gotoxy(x, y++);
	cout << " □■■■■■■■■■■□" << endl;
	gotoxy(x, y++);
	cout << "   □□□□□□□□□□  □□□□" << endl;
	gotoxy(x, y++);
	cout << " □                   □□      □" << endl;
	gotoxy(x, y++);
	cout << " □                    □       □" << endl;
	gotoxy(x, y++);
	cout << " □                    □       □" << endl;
	gotoxy(x, y++);
	cout << " □                    □       □" << endl;
	gotoxy(x, y++);
	cout << " □                    □       □" << endl;
	gotoxy(x, y++);
	cout << " □                    □       □" << endl;
	gotoxy(x, y++);
	cout << " □                   □□      □" << endl;
	gotoxy(x, y++);
	cout << "  □                 □  □□□□" << endl;
	gotoxy(x, y++);
	cout << "   □□□□□□□□□" << endl;
	gotoxy(36, y + 1);
	cout << "3. 카페";
	gotoxy(36, y + 2);
	cout << "12,000원";
}
void chose1::PrintOne(int x, int y) {
	gotoxy(x++, y++);
	cout << "          ■■" << endl;
	gotoxy(x, y++);
	cout << "       ■■■" << endl;
	gotoxy(x, y++);
	cout << "     ■■■■" << endl;
	gotoxy(x, y++);
	cout << "   ■■■■■" << endl;
	gotoxy(x, y++);
	cout << "■■   ■■■" << endl;
	gotoxy(x, y++);
	cout << "       ■■■" << endl;
	gotoxy(x, y++);
	cout << "       ■■■" << endl;
	gotoxy(x, y++);
	cout << "       ■■■" << endl;
	gotoxy(x, y++);
	cout << "       ■■■" << endl;
	gotoxy(x, y++);
	cout << "       ■■■" << endl;
	gotoxy(x, y++);
	cout << "       ■■■" << endl;
	gotoxy(x, y++);
	cout << "       ■■■" << endl;
	gotoxy(x, y++);
	cout << "       ■■■" << endl;
	gotoxy(x, y++);
	cout << "       ■■■" << endl;
	gotoxy(x, y++);
	cout << " ■■■■■■■■■" << endl;
	gotoxy(78, y + 1);
	cout << "4. 1인분";
	gotoxy(78, y + 2);
	cout << "7,000원";
}
void chose1::PrintTakeout(int x, int y) {
	gotoxy(x++, y++);
	cout << " ■■■■■■■    ■■■■■   ■" << endl;
	gotoxy(x, y++);
	cout << "  ■      ■             ■    ■" << endl;
	gotoxy(x, y++);
	cout << "  ■      ■           ■      ■■" << endl;
	gotoxy(x, y++);
	cout << "■■■■■■■       ■  ■    ■" << endl;
	gotoxy(x, y++);
	cout << "      ■           ■      ■  ■" << endl;
	gotoxy(x, y++);
	cout << "      ■                ■■■■" << endl;
	gotoxy(x, y++);
	cout << "■■■■■■■        ■       ■" << endl;
	gotoxy(x, y++);
	cout << "                        ■■■■" << endl;
	gotoxy(33, y + 4);
	cout << "5. 테이크아웃";
	gotoxy(33, y + 5);
	cout << "11,000원";
}
void chose1::PrintRanking(int x, int y) {
	gotoxy(x++, y++);
	cout << "               ■" << endl;
	gotoxy(x, y++);
	cout << "             ■■" << endl;
	gotoxy(x, y++);
	cout << "■          ■■■          ■" << endl;
	gotoxy(x, y++);
	cout << "■■       ■■■■       ■■" << endl;
	gotoxy(x, y++);
	cout << "■■■    ■■■■■    ■■■" << endl;
	gotoxy(x, y++);
	cout << "■■■■■■■■■■■■■■■" << endl;
	gotoxy(x, y++);
	cout << "■■■■■■■■■■■■■■■" << endl;
	gotoxy(x, y++);
	cout << "■■■■■■■■■■■■■■■" << endl;
	gotoxy(x, y++);
	cout << "■■■■■■■■■■■■■■■" << endl;
	gotoxy(x, y++);
	cout << "■■■■■■■■■■■■■■■" << endl;
	gotoxy(77, y + 3);
	cout << "6. 맛집랭킹";
	gotoxy(77, y + 4);
	cout << "17,500원";
}
chose1::chose1() {
	gotoxy(54, 1);
	cout << "음식 카테고리" << endl;

	//사각형
	for (int i = 0; i < 3; i++, SquareGap_y += 22) {
		Rectangle(SquareGap_x, SquareGap_y, 40, 20);
		Rectangle(SquareGap_x + 43, SquareGap_y, 40, 20);
	}

	//음식
	PrintChicken(FoodGap_x, FoodGap_y);
	PrintPizza(FoodGap_x + 35, FoodGap_y + 2);
	PrintCoffee(FoodGap_x - 7, FoodGap_y + 23);
	PrintOne(FoodGap_x + 43, FoodGap_y + 22);
	PrintTakeout(FoodGap_x - 7, FoodGap_y + 48);
	PrintRanking(FoodGap_x + 37, FoodGap_y + 47);

	int num; //주문번호임
	gotoxy(FoodGap_x - 7, FoodGap_y + 65);
	cout << "주문 번호를 입력하세요 : ";
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