#include "mainPrint.h"
#include "Print.h"
#include "chose1.h"
#include <iostream>
#include <windows.h>

int main() {
	mainPrint mainP;
	//����(����ȭ��)
	mainP.Rectangle(3, 2, 110, 24);  //�簢�� �׸���
	mainP.title();					 //Ÿ��Ʋ ��

	return 0;
}