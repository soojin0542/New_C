#include <stdio.h>
int main() {
	//printf("Hello World!"); printf("\n\n");
	/*
	1.1
	2.2
	3.1
	4.2-1-3-4
	5.2
	7.1
	8.��ǻ�� �ȿ��� ������ ���� ������ �����ϴ� ȸ�θ� �����ϴµ� �̿�ȴ�
	*/
	//12.
	int milk = 10;
	int juice = 20;
	int tmp = 0;

	printf("\n�� milk : %d, juice : %d\n", milk, juice);
	tmp = milk;
	milk = juice;
	juice = tmp;
	printf("\n�� milk : %d, juice : %d\n", milk, juice);
	//13.
	//"stdio.h" ���� ""�� �ƴ� <>�� ����Ѵ�
	//integer �� �ƴ� int�� ����Ѵ�.
	//print('Hello world!') ���� printf�� ����Ѵ�.
	//							 ''�� �ƴ� ""�� ����Ѵ�.
	//							 ;�� ����. 
	//return0; �� �ƴ� return 0; �� ����Ѵ�.
}