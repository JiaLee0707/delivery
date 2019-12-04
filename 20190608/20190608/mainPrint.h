#ifndef MAINPRINT_H
#define MAINPRINT_H

#include "Print.h"
using namespace std;
class mainPrint : public Print {
public:
	int money = 0;
public:
	void title();
	int Check();
};

#endif