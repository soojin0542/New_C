#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	//�ؿܿ��� ��� ���
	int day;
	int ticket;
	int hotel;
	int dmoney;

	printf("������ ����ΰ���? : ");
	scanf("%d", &day);
	printf("�װ��� ���� : ");
	scanf("%d", &ticket);
	printf("ȣ�� 1�� ���� : ");
	scanf("%d", &hotel);
	printf("�Ϸ� �뵷 : ");
	scanf("%d", &dmoney);

	printf("\n");

	printf("�� ������ : %d", ticket + hotel * day + dmoney * day);
}