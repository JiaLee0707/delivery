#include <iostream>
using namespace std;

void MainDisplayView();

int main() {
	int money = 0;
	MainDisplayView();
	do
	{
		cout << "�Ա��Ͻ� ���� �Է����ּ��� : ";
		cin >> money;
		if (money <= 0)
			cout << "���� 0������ �۰ų� �����ϴ�." << endl << endl;
	} while (money <= 0);
	return 0;
}
void MainDisplayView() {
	cout << "                                                                                                              " << endl;
	cout << "                                                                                                              " << endl;
	cout << "  ��    ��  ��    ��      �������    ��        �����      ��      ���  ���  ��  ��        ����    " << endl;
	cout << "  ��    ��  ��    ��      ��              ��      ��        ��    ��      ��    ��    ��  ��      ��      ��  " << endl;
	cout << "  ��    ��  ��    ��      ��              ����  ��        ��    ��      ��    ��    ��  ��      ��      ��  " << endl;
	cout << "  ��    ��  ��    ��      ��              ��      ��        ��    ��      ��    ��    ��  ��              ��  " << endl;
	cout << "  �����  ��    ��      ��������  ��      ��        �����      ��    ��    ��  ��            ��    " << endl;
	cout << "  ��    ��  �����                      ��      ��        ��    ��      ��    ��    ����          ��      " << endl;
	cout << "  ��    ��  ��    ��        ���������      ��        ��    ��      ��    ��    ��  ��          ��      " << endl;
	cout << "  ��    ��  ��    ��                      ��      ��        ��    ��      ��    ��    ��  ��                  " << endl;
	cout << "  ��    ��  ��    ��        ���������      ��        ��    ��      ��    ��    ��  ��          ��      " << endl;
	cout << "  �����  ��    ��        ��                      �����      ��      ��������  ��          ��      " << endl;
	cout << "            ��    ��        ���������                      ��                  ��  ��                  " << endl;
	cout << "                                                                                                              " << endl;
	cout << "                                                                                                              " << endl;
}