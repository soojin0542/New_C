#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
//1
printf("#	#\n");
printf("#	#\n");
printf("#	#\n");
printf("######\n");
printf("#	#\n");
printf("#	#\n");
printf("#	#\n");

//2
printf("�̸� : ȫ�浿\n");
printf("�ּ� : ����� ���α�\n");
printf("��ȭ��ȣ : 111-2222\n");

//3
int price;
int number;

printf("��ǰ ������ �Է��ϼ��� : ");
scanf("%d", &price);
printf("��ǰ ������ �Է��ϼ��� : ");
scanf("%d", &number);

printf("�� ������ %d�Դϴ�.\n", price * number);

//4
int age;
printf("���̸� �Է��ϼ��� : ");
scanf("%d", &age);
printf("�����̸� %d���� �ǽô±���.\n\n", age + 1);

//5
float a;
float b;
float c;

printf("������ �Է��ϼ��� : ");
scanf("%f", &a);
printf("������ �Է��ϼ��� : ");
scanf("%f", &b);
printf("������ �Է��ϼ��� : ");
scanf("%f", &c);

float average = (a + b + c) / 3;
printf("����� %f�Դϴ�.\n\n", average);

//6
int ang1;
int ang2;

printf("�ﰢ���� ���� 2�� �Է�\n:");
scanf("%d%d", &ang1, &ang2);
printf("����° ���� %d", 180 - (ang1 + ang2));
}