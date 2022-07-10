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
	8.컴퓨터 안에서 덧셈과 같은 연산을 수행하는 회로를 구현하는데 이용된다
	*/
	//12.
	int milk = 10;
	int juice = 20;
	int tmp = 0;

	printf("\n전 milk : %d, juice : %d\n", milk, juice);
	tmp = milk;
	milk = juice;
	juice = tmp;
	printf("\n후 milk : %d, juice : %d\n", milk, juice);
	//13.
	//"stdio.h" 에서 ""가 아닌 <>를 써야한다
	//integer 가 아닌 int를 써야한다.
	//print('Hello world!') 에서 printf로 써야한다.
	//							 ''가 아닌 ""를 써야한다.
	//							 ;가 없다. 
	//return0; 이 아닌 return 0; 로 써야한다.
}