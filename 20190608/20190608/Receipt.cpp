#include "mainPrint.h"
#include "Receipt.h"
#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>
#include <conio.h>

void Receipt::Rprint(int num) {
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
		cout << "�߸��Է��ϼ̽��ϴ�. Ÿ��Ʋ ȭ������ ���ư��ϴ�.";
		mainPrint mainP;
		mainP.Rectangle(3, 2, 110, 24);  //�簢�� �׸���
		mainP.title();					 //Ÿ��Ʋ ��
	}
}