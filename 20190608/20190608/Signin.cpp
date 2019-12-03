#include "Print.h"
#include "mainPrint.h"
#include "Signin.h"
#include <iostream>
#include <windows.h>
#include <string>
#include<fstream>
using namespace std;

Signin::Signin() {
	
	cout << "아이디 입력 : ";
	string out_line1, out_line2;
	ofstream out;
	out.open("signin.txt", ios::app);
	//for (int i = 0; i <= 1; i++) {
	cin >> out_line1;
	getchar();
	cout << "비밀번호 입력 : ";
	cin >> out_line2;

	out << out_line1 << endl;
	out << out_line2 << endl;
	//}
	out.close();

	string in_line;
	ifstream in("signin.txt");
	while (getline(in, in_line)) {
		cout << in_line << endl;
	}
	in.close();

}