#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//�Ǽ� ��Ģ����
	double x, y, result;

	printf("�Ǽ� �ΰ� �Է� : ");
	scanf("%lf %lf", &x, &y);
	//�ΰ��� ������ ���ÿ� �Է¹���

	result = x + y;
	printf("(����1) %lf + %lf = %lf\n", x, y, result);
	printf("(����2) %lf + %lf = %lf\n", x, y, x + y);
	//�� ���� ���� ����

	result = x - y;
	printf("(����) %lf - %lf = %lf\n", x, y, result);

	result = x * y;
	printf("(����) %lf x %lf = %lf\n", x, y, result);

	result = x / y;
	printf("(������) %lf �� %lf = %lf\n", x, y, result);
}