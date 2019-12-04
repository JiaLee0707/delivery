#include "Print.h"
#include "chose1.h"
#include "MenuInfo.h"
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>
#include <fstream>

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

	}
}