#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define km 1000

int main() {
	//Programming

	//1
	/*
	double a;
	printf("실수를 입력하세요 : ");
	scanf("%lf", &a);

	printf("지수 형식으로는 %e입니다\n", a);
	*/

	//2
	/*
	double b = 0;

	printf("지수형식으로 실수를 입력하세요 : ");
	scanf("%le", &b);
	printf("소수점 표기 형식으로는 %lf입니다\n", b);
	*/

	//3
	/*
	double PI = 3.141592;
	double radius;

	printf("반지름을 입력하세요 : ");
	scanf("%lf", &radius);

	printf("구의 표면적 : %lf\n", 4.0 * PI * (radius * radius));
	printf("구의 부피 : %lf\n", 4.0 / 3.0 * PI * (radius * radius * radius));
	*/

	//4
	/*
	double x;
	//3x^3 - 7x^2 + 9의 값을 구하자

	printf("x의 값을 입력하세요 : ");
	scanf("%lf", &x);
	double solve = 3 * x * x * x - 7 * x * x + 9;

	printf("다항식의 값은 %lf 입니다", solve);
	*/

	//5
	/*
	char ch;
	printf("문자를 입력하세요 : ");
	ch = getchar();
	printf("아스키 코드 : %d", ch);
	*/

	//6
	/*
	char a, b, c;

	printf("문자 3개를 입력하세요 : ");
	scanf("%c %c %c", &a, &b, &c);
	printf("문자 : %c %c %c", c, b, a);
	*/

	//7
	/*
	printf("char형의 크기는 %d바이트 입니다\n", sizeof(char));
	printf("short형의 크기는 %d바이트 입니다\n", sizeof(short));
	printf("int형의 크기는 %d바이트 입니다\n", sizeof(int));
	printf("long형의 크기는 %d바이트 입니다\n", sizeof(long));
	printf("long long형의 크기는 %d바이트 입니다\n", sizeof(long long));
	printf("float형의 크기는 %d바이트 입니다\n", sizeof(float));
	printf("double형의 크기는 %d바이트 입니다\n", sizeof(double));
	printf("long double형의 크기는 %d바이트 입니다\n", sizeof(long double));
	*/

	//8

	double hour, min, sec, time, metre, speed;

	printf("거리를 미터로 입력하세요 : ");
	scanf("%lf", &metre);
	printf("시간을 입력하세요 : ");
	scanf("%lf", &hour);
	printf("분을 입력하세요 : ");
	scanf("%lf", &min);
	printf("초를 입력하세요 : ");
	scanf("%lf", &sec);

	time = (hour * 3600.0) + (min * 60.0) + sec;
	speed = (metre / 1000.0) / (time/3600);
	printf("속도 : %lf", speed);

}