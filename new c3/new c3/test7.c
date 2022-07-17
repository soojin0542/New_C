#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	#define exchange 1120
	const int EXCHANGE = 1120; //기호상수(const) constant의 약자 변경되지 않는것을 의미한다
	//둘은 같은 코드다
	//변수 선언 앞에 const를 붙이면 상수가 된다.

	/*
	char c;		//문자형 변수 c 선언
	int i;			//정수형 변수 i 선언
	double d;	//부동소수점 변수 d 선언

	c = 'a';		//문자 a를 저장
	i = 7;			//정수 7을 저장
	d = 0.05;	//실수 0.05를 저장.
	//문자는 'a'와 같이 작은따옴표로 나타낸다
	//그냥 a라고 하면 컴파일러는 변수이름으로 생각한다
	//동일한 자료형의 변수를 한줄로 여러개 선언할 수 있다.
	double a, b = 12.5;
	int c = 10, d = 50, e, f;
	char g = 'g', h, i;

	e = 31 * c * c;	 //31은 상수이다.
								//상수는 도중에 값이 변경되지 않는다.

	short j;			//short형의 변수를 생성, 형식지정자는 %hi
	int k;				//int형의 변수를 생성, '' %d
	long l;			//long형의 변수를 생성, '' %ld
	long long n;	//long long형의 변수를 생성, '' %lld

	unsigned int speed;
	unsigned speed;
	//둘은 같은 코드다
	*/

	//달러를 원화로 계산하기
	//1달러당 1120원이라고 가정
	int usd; //달러화
	int krw; //원화

	printf("달러화 금액을 입력하세요 : ");
	scanf("%d", &usd);
	krw = usd * exchange;
	printf("달러화 %d달러는 %d원입니다.", usd, krw);
}