#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//�ϼ� ����
	/*
	int years, weeks, days;

	printf("�� �ϼ��� �Է��ϼ��� : ");
	scanf("%d", &days);

	years = days / 365;			//���
	weeks = (days % 365) / 7;	//�ּ�
	days = days - (years * 365) + (weeks * 7);
	printf("%d�� %d���� %d��\n", years, weeks, days);
	*/

	//���Ǳ�
	int input, price;

	printf("������ �� : ");
	scanf("%d", &input);
	printf("���ǰ� : ");
	scanf("%d", &price);

	int change = input - price;
	printf("�Ž����� : %d\n\n", change);

	int coin100, coin10;
	coin100 = change / 100;
	coin10 = change % 100 / 10;
	printf("100�� ������ ���� : %d\n", coin100);
	printf("10�� ������ ���� : %d\n", coin10);
}