#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//�����÷ο츦 �������� �� ū ���� ������ �� �ִ� long long ���� ���
	//int���� ���������ڰ� %d���� long long���� ���������ڴ� %lld�̴�.
	long long int property;
	long long int saving;
	long long int year;

	printf("�Ŵ� ����ݾ��� �Է��ϼ��� : ");
	scanf("%lld", &saving); //long long ������ �Է¹���
	printf("��� ���� ����� �ñ��Ѱ���? : ");
	scanf("%lld", &year);

	property = saving * 12 * year;
	printf("%lld�� ���� ��� : %lld��", year, property);

	/*
	//ȭ���µ� ��ȯ��
	double celsius, fahrenheit;

	printf("ȭ���µ� = ");
	scanf("%lf", &fahrenheit);	//double������ �Է¹���
	celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
	printf("�����µ� = %lf\n", celsius);
	*/
}