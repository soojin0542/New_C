#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	#define exchange 1120
	const int EXCHANGE = 1120; //��ȣ���(const) constant�� ���� ������� �ʴ°��� �ǹ��Ѵ�
	//���� ���� �ڵ��
	//���� ���� �տ� const�� ���̸� ����� �ȴ�.

	/*
	char c;		//������ ���� c ����
	int i;			//������ ���� i ����
	double d;	//�ε��Ҽ��� ���� d ����

	c = 'a';		//���� a�� ����
	i = 7;			//���� 7�� ����
	d = 0.05;	//�Ǽ� 0.05�� ����.
	//���ڴ� 'a'�� ���� ��������ǥ�� ��Ÿ����
	//�׳� a��� �ϸ� �����Ϸ��� �����̸����� �����Ѵ�
	//������ �ڷ����� ������ ���ٷ� ������ ������ �� �ִ�.
	double a, b = 12.5;
	int c = 10, d = 50, e, f;
	char g = 'g', h, i;

	e = 31 * c * c;	 //31�� ����̴�.
								//����� ���߿� ���� ������� �ʴ´�.

	short j;			//short���� ������ ����, ���������ڴ� %hi
	int k;				//int���� ������ ����, '' %d
	long l;			//long���� ������ ����, '' %ld
	long long n;	//long long���� ������ ����, '' %lld

	unsigned int speed;
	unsigned speed;
	//���� ���� �ڵ��
	*/

	//�޷��� ��ȭ�� ����ϱ�
	//1�޷��� 1120���̶�� ����
	int usd; //�޷�ȭ
	int krw; //��ȭ

	printf("�޷�ȭ �ݾ��� �Է��ϼ��� : ");
	scanf("%d", &usd);
	krw = usd * exchange;
	printf("�޷�ȭ %d�޷��� %d���Դϴ�.", usd, krw);
}