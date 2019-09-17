#pragma once//
#include "Header.h"
#include <iostream>
using namespace std;
int main()
{
	LV a = LV(1, 2, 3, 4);
	const LV b = LV(2, 4, 5, 6);
	cout << "norma:" << (a.norma()) << endl;
	a.dout(b);//
	const LV c = a + b;
	const LV m = a - b;
	const LV k = -a;
	a.perehod(0.5);
	c.outLV();
	m.outLV();
	k.outLV();
	a.outLV();
	cout <<"norma:" <<(a.norma())<< endl;
	system("pause");
}