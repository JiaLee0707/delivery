#ifndef PRINT_H
#define PRINT_H

using namespace std;
class Print {
private:
	unsigned char b[7];	//사각형 틀(특수문자) 배열

public:
	Print();
	void gotoxy(int x, int y);
	void Rectangle(int x, int y, int length, int width);
};
#endif
