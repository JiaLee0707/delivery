#ifndef PRINT_H
#define PRINT_H

using namespace std;
class Print {
private:
	unsigned char b[7];	//�簢�� Ʋ(Ư������) �迭

public:
	Print();
	void gotoxy(int x, int y);
	void Rectangle(int x, int y, int length, int width);
};
#endif
