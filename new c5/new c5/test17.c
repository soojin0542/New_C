#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//일수 계산기
	/*
	int years, weeks, days;

	printf("총 일수를 입력하세요 : ");
	scanf("%d", &days);

	years = days / 365;			//년수
	weeks = (days % 365) / 7;	//주수
	days = days - (years * 365) + (weeks * 7);
	printf("%d년 %d개월 %d일\n", years, weeks, days);
	*/

	//자판기
	int input, price;

	printf("투입한 돈 : ");
	scanf("%d", &input);
	printf("물건값 : ");
	scanf("%d", &price);

	int change = input - price;
	printf("거스름돈 : %d\n\n", change);

	int coin100, coin10;
	coin100 = change / 100;
	coin10 = change % 100 / 10;
	printf("100원 동전의 개수 : %d\n", coin100);
	printf("10원 동전의 개수 : %d\n", coin10);
}