#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//초 단위 시간을 받아 몇분 몇초인지 계산
	int minute, second, input;

	printf("초 단위의 시간을 입력하세요 : ");
	scanf("%d", &input);

	minute = input / 60;	//몇분
	second = input % 60;	//몇초
	printf("(기본) %d초는 %d분 %d초입니다.\n", input, minute, second);

	//응용 - 시간단위까지
	int hour;
	hour = minute / 60;		//몇시
	minute = input % 60;	//몇분
	second = input % 60;	//몇초
	printf("(응용) %d초는 %d시간 %d분 %d초입니다.\n", input, hour, minute, second);
}