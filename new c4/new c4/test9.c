#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//오버플로우를 막기위해 더 큰 수를 저장할 수 있는 long long 형을 사용
	//int형은 형식지정자가 %d지만 long long형의 형식지정자는 %lld이다.
	long long int property;
	long long int saving;
	long long int year;

	printf("매달 저축금액을 입력하세요 : ");
	scanf("%lld", &saving); //long long 형으로 입력받음
	printf("몇년 후의 재산이 궁금한가요? : ");
	scanf("%lld", &year);

	property = saving * 12 * year;
	printf("%lld년 후의 재산 : %lld원", year, property);

	/*
	//화씨온도 변환기
	double celsius, fahrenheit;

	printf("화씨온도 = ");
	scanf("%lf", &fahrenheit);	//double형으로 입력받음
	celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
	printf("섭씨온도 = %lf\n", celsius);
	*/
}