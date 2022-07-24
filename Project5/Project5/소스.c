#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*
	//1
	double a;
	printf("실수를 입력하세요 : ");
	scanf("%lf", &a);

	printf("지수 형식으로는 %e입니다\n", a);
	//printf("실수 형식으로는 %f입니다\n", a);
	*/

	/*
	//2
	double b = 0;
	printf("지수형식으로 실수를 입력하세요 : ");
	scanf("%lf", &b);
	printf("소수점 표기 형식으로는 %le입니다\n", b);
	*/

	
	//3
	double PI= 3.141592;
	double radius;

	printf("반지름을 입력하세요 : ");
	scanf("%lf", &radius);

	printf("구의 표면적 : %lf\n", 4.0 * PI * (radius * radius));
	printf("구의 부피 : %lf\n", 4.0 / 3.0 * PI * (radius * radius * radius));
	

	/*
	//4
	double x;
	printf("x의 값을 입력하세요 : ");
	scanf("%lf", &x);
	*/
}