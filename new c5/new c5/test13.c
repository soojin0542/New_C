#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//���� ��Ģ����
	int x, y, result;

	printf("���� �ΰ� �Է� : ");
	scanf("%d %d", &x, &y); 
	//�ΰ��� ������ ���ÿ� �Է¹���

	result = x + y;
	printf("(����1) %d + %d = %d\n", x, y, result);
	printf("(����2) %d + %d = %d\n", x, y, x + y);
	//�� ���� ���� ����

	result = x - y;
	printf("(����) %d - %d = %d\n", x, y, result);

	result = x * y;
	printf("(����) %d x %d = %d\n", x, y, result);

	result = x / y;
	printf("(������) %d �� %d = %d\n", x, y, result);

	result = x % y;
	printf("(������) %d %% %d = %d\n", x, y, result);
}