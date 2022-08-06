#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*
	문자형
	char code;
	code = 'A';
	'A'와 같이 작은따옴표로 감싸진 문자를 문자상수라고 한다.
	code를 십진수 형식으로 출력하면 65(A에 해당하는 아스키코드)가 출력된다.

	문자형 입출력하는법
	scanf()를 형식지정자 %c를 이용해 호출하기
	getchar() 전용함수 사용하기
	*/

	char c;
	c = 'A';
	printf("A의 아스키코드 : %d\n", c);

	printf("문자를 입력하세요 : ");
	c = getchar(); //scanf("%c", &c) 와 같음
	printf("%c의 아스키코드 : %d\n", c, c); //문자와 아스키코드 출력
}