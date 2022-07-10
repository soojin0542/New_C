#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//사칙연산
	printf("사칙연산(정수형)\n");
	int a;
	int b;

	printf("첫번째 숫자를 입력하세요 : ");
	scanf("%d", &a); printf("\n");
	printf("두번째 숫자를 입력하세요 : ");
	scanf("%d", &b); printf("\n");

	printf("두 수의 합 : %d\n", a + b);
	printf("두 수의 차 : %d\n", a - b);
	printf("두 수의 곱 : %d\n", a * b);
	printf("두 수의 몫 : %d\n", a / b);

	printf("\n\n");

	printf("사칙연산(실수형)\n");
	float x;
	float y;

	printf("첫번째 숫자를 입력하세요 : ");
	scanf("%f", &x); printf("\n");
	printf("두번째 숫자를 입력하세요 : ");
	scanf("%f", &y); printf("\n");
	
	printf("두 수의 합 : %.2f\n", x + y);
	printf("두 수의 차 : %.2f\n", x - y);
	printf("두 수의 곱 : %.2f\n", x * y);
	printf("두 수의 몫 : %.4f\n", x / y);
}