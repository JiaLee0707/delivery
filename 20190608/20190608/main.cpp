#include "mainPrint.h"
#include "Print.h"
#include "chose1.h"
#include <iostream>
#include <windows.h>

int main() {
	mainPrint mainP;
	//chose1 c1;

	//����(����ȭ��)
	mainP.Rectangle(3, 2, 110, 24);  //�簢�� �׸���
	mainP.title();					 //Ÿ��Ʋ ��


	if (mainP.money > 0) {
		system("cls");
		chose1 c1;
	}

	return 0;
}