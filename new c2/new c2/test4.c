#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	//해외여행 비용 계산
	int day;
	int ticket;
	int hotel;
	int dmoney;

	printf("여행은 몇박인가요? : ");
	scanf("%d", &day);
	printf("항공권 가격 : ");
	scanf("%d", &ticket);
	printf("호텔 1박 가격 : ");
	scanf("%d", &hotel);
	printf("하루 용돈 : ");
	scanf("%d", &dmoney);

	printf("\n");

	printf("총 여행비용 : %d", ticket + hotel * day + dmoney * day);
}