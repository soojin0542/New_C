#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//�� ���� �ð��� �޾� ��� �������� ���
	int minute, second, input;

	printf("�� ������ �ð��� �Է��ϼ��� : ");
	scanf("%d", &input);

	minute = input / 60;	//���
	second = input % 60;	//����
	printf("(�⺻) %d�ʴ� %d�� %d���Դϴ�.\n", input, minute, second);

	//���� - �ð���������
	int hour;
	hour = minute / 60;		//���
	minute = input % 60;	//���
	second = input % 60;	//����
	printf("(����) %d�ʴ� %d�ð� %d�� %d���Դϴ�.\n", input, hour, minute, second);
}