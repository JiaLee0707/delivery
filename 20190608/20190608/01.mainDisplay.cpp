#include <iostream>
using namespace std;

void MainDisplayView();

int main() {
	int money = 0;
	MainDisplayView();
	do
	{
		cout << "입금하실 돈을 입력해주세요 : ";
		cin >> money;
		if (money <= 0)
			cout << "돈이 0원보다 작거나 같습니다." << endl << endl;
	} while (money <= 0);
	return 0;
}
void MainDisplayView() {
	cout << "                                                                                                              " << endl;
	cout << "                                                                                                              " << endl;
	cout << "  ■    ■  ■    ■      ■■■■■■    ■        ■■■■      ■      ■■  ■■  ■  ■        ■■■    " << endl;
	cout << "  ■    ■  ■    ■      ■              ■      ■        ■    ■      ■    ■    ■  ■      ■      ■  " << endl;
	cout << "  ■    ■  ■    ■      ■              ■■■  ■        ■    ■      ■    ■    ■  ■      ■      ■  " << endl;
	cout << "  ■    ■  ■    ■      ■              ■      ■        ■    ■      ■    ■    ■  ■              ■  " << endl;
	cout << "  ■■■■  ■    ■      ■■■■■■■  ■      ■        ■■■■      ■    ■    ■  ■            ■    " << endl;
	cout << "  ■    ■  ■■■■                      ■      ■        ■    ■      ■    ■    ■■■          ■      " << endl;
	cout << "  ■    ■  ■    ■        ■■■■■■■■      ■        ■    ■      ■    ■    ■  ■          ■      " << endl;
	cout << "  ■    ■  ■    ■                      ■      ■        ■    ■      ■    ■    ■  ■                  " << endl;
	cout << "  ■    ■  ■    ■        ■■■■■■■■      ■        ■    ■      ■    ■    ■  ■          ■      " << endl;
	cout << "  ■■■■  ■    ■        ■                      ■■■■      ■      ■■■■■■■  ■          ■      " << endl;
	cout << "            ■    ■        ■■■■■■■■                      ■                  ■  ■                  " << endl;
	cout << "                                                                                                              " << endl;
	cout << "                                                                                                              " << endl;
}