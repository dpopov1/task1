#include "Header.h"
#include "windows.h"
int main()
{
	LV a = LV(1, 2, 3, 4);
	LV b = LV(2, 4, 5, 6);
	LV c = a + b;
	LV m = a - b;
	LV k = -a;
	c.outLV();
	m.outLV();
	k.outLV();
	dout(a*b);
	system("pause");
}