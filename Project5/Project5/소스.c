#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*
	//1
	double a;
	printf("�Ǽ��� �Է��ϼ��� : ");
	scanf("%lf", &a);

	printf("���� �������δ� %e�Դϴ�\n", a);
	//printf("�Ǽ� �������δ� %f�Դϴ�\n", a);
	*/

	/*
	//2
	double b = 0;
	printf("������������ �Ǽ��� �Է��ϼ��� : ");
	scanf("%lf", &b);
	printf("�Ҽ��� ǥ�� �������δ� %le�Դϴ�\n", b);
	*/

	
	//3
	double PI= 3.141592;
	double radius;

	printf("�������� �Է��ϼ��� : ");
	scanf("%lf", &radius);

	printf("���� ǥ���� : %lf\n", 4.0 * PI * (radius * radius));
	printf("���� ���� : %lf\n", 4.0 / 3.0 * PI * (radius * radius * radius));
	

	/*
	//4
	double x;
	printf("x�� ���� �Է��ϼ��� : ");
	scanf("%lf", &x);
	*/
}