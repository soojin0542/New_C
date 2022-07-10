#include <stdio.h>


int main() {
	//printf("Hello World!\nFrom.soojin"); 와

	/*printf("Hello World!\n");
	printf("From.soojin");*/
	//는 출력 결과가 같다.

	printf("3 X 1 = 3\n");
	printf("3 X 2 = 6\n");
	printf("3 X 3 = 9\n");
	//위에서 아래쪽 순서로 실행된다


	int x;
	int y;
	int sum;

	x = 100;
	y = 200;

	sum = x + y;
	printf("\nx : %d\ny : %d", x, y);
	printf("\n두 수의 합 = %d\n", sum);


	//응용
	x = 0;
	y = 0;
	sum = 0;

	printf("첫번째 숫자를 입력하세요 : ");
	scanf("%d", &x); printf("\n");
	printf("두번째 숫자를 입력하세요 : ");
	scanf("%d", &y); printf("\n");

	sum = x + y;
	printf("\nx : %d\ny : %d", x, y);
	printf("\n두 수의 합 = %d\n", sum);


	/*산술 연산자
	덧셈 : +
	뺄셈 : -
	곱셈 : *
	나눗셈 : /
	나머지 : %
	*/

	/*형식 지정자
	%d : 정수형태로 출력
	%f : 실수형태로 출력
	%c : 문자형태로 출력
	%s : 문자열형태로 출력
	*/
}