#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//정수 사칙연산
	int x, y, result;

	printf("정수 두개 입력 : ");
	scanf("%d %d", &x, &y); 
	//두개의 정수를 동시에 입력받음

	result = x + y;
	printf("(덧셈1) %d + %d = %d\n", x, y, result);
	printf("(덧셈2) %d + %d = %d\n", x, y, x + y);
	//두 식은 값이 같음

	result = x - y;
	printf("(뺄셈) %d - %d = %d\n", x, y, result);

	result = x * y;
	printf("(곱셈) %d x %d = %d\n", x, y, result);

	result = x / y;
	printf("(나눗셈) %d ÷ %d = %d\n", x, y, result);

	result = x % y;
	printf("(나머지) %d %% %d = %d\n", x, y, result);
}