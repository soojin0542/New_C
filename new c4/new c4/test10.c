#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*
	������
	char code;
	code = 'A';
	'A'�� ���� ��������ǥ�� ������ ���ڸ� ���ڻ����� �Ѵ�.
	code�� ������ �������� ����ϸ� 65(A�� �ش��ϴ� �ƽ�Ű�ڵ�)�� ��µȴ�.

	������ ������ϴ¹�
	scanf()�� ���������� %c�� �̿��� ȣ���ϱ�
	getchar() �����Լ� ����ϱ�
	*/

	char c;
	c = 'A';
	printf("A�� �ƽ�Ű�ڵ� : %d\n", c);

	printf("���ڸ� �Է��ϼ��� : ");
	c = getchar(); //scanf("%c", &c) �� ����
	printf("%c�� �ƽ�Ű�ڵ� : %d\n", c, c); //���ڿ� �ƽ�Ű�ڵ� ���
}