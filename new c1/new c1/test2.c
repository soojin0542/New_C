#include <stdio.h>


int main() {
	//printf("Hello World!\nFrom.soojin"); ��

	/*printf("Hello World!\n");
	printf("From.soojin");*/
	//�� ��� ����� ����.

	printf("3 X 1 = 3\n");
	printf("3 X 2 = 6\n");
	printf("3 X 3 = 9\n");
	//������ �Ʒ��� ������ ����ȴ�


	int x;
	int y;
	int sum;

	x = 100;
	y = 200;

	sum = x + y;
	printf("\nx : %d\ny : %d", x, y);
	printf("\n�� ���� �� = %d\n", sum);


	//����
	x = 0;
	y = 0;
	sum = 0;

	printf("ù��° ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &x); printf("\n");
	printf("�ι�° ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &y); printf("\n");

	sum = x + y;
	printf("\nx : %d\ny : %d", x, y);
	printf("\n�� ���� �� = %d\n", sum);


	/*��� ������
	���� : +
	���� : -
	���� : *
	������ : /
	������ : %
	*/

	/*���� ������
	%d : �������·� ���
	%f : �Ǽ����·� ���
	%c : �������·� ���
	%s : ���ڿ����·� ���
	*/
}