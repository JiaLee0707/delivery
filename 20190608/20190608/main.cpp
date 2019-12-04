#include "mainPrint.h"
#include "Print.h"
#include "chose1.h"
#include <iostream>
#include <windows.h>

int main() {
	mainPrint mainP;
	//메인(시작화면)
	mainP.Rectangle(3, 2, 110, 24);  //사각형 그리기
	mainP.title();					 //타이틀 명

	return 0;
}