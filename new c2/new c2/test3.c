#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//��Ģ����
	printf("��Ģ����(������)\n");
	int a;
	int b;

	printf("ù��° ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &a); printf("\n");
	printf("�ι�° ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &b); printf("\n");

	printf("�� ���� �� : %d\n", a + b);
	printf("�� ���� �� : %d\n", a - b);
	printf("�� ���� �� : %d\n", a * b);
	printf("�� ���� �� : %d\n", a / b);

	printf("\n\n");

	printf("��Ģ����(�Ǽ���)\n");
	float x;
	float y;

	printf("ù��° ���ڸ� �Է��ϼ��� : ");
	scanf("%f", &x); printf("\n");
	printf("�ι�° ���ڸ� �Է��ϼ��� : ");
	scanf("%f", &y); printf("\n");
	
	printf("�� ���� �� : %.2f\n", x + y);
	printf("�� ���� �� : %.2f\n", x - y);
	printf("�� ���� �� : %.2f\n", x * y);
	printf("�� ���� �� : %.4f\n", x / y);
}