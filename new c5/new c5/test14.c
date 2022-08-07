#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//½Ç¼ö »çÄ¢¿¬»ê
	double x, y, result;

	printf("½Ç¼ö µÎ°³ ÀÔ·Â : ");
	scanf("%lf %lf", &x, &y);
	//µÎ°³ÀÇ Á¤¼ö¸¦ µ¿½Ã¿¡ ÀÔ·Â¹ÞÀ½

	result = x + y;
	printf("(µ¡¼À1) %lf + %lf = %lf\n", x, y, result);
	printf("(µ¡¼À2) %lf + %lf = %lf\n", x, y, x + y);
	//µÎ ½ÄÀº °ªÀÌ °°À½

	result = x - y;
	printf("(»¬¼À) %lf - %lf = %lf\n", x, y, result);

	result = x * y;
	printf("(°ö¼À) %lf x %lf = %lf\n", x, y, result);

	result = x / y;
	printf("(³ª´°¼À) %lf ¡À %lf = %lf\n", x, y, result);
}