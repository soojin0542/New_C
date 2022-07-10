#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
//1
printf("#	#\n");
printf("#	#\n");
printf("#	#\n");
printf("######\n");
printf("#	#\n");
printf("#	#\n");
printf("#	#\n");

//2
printf("이름 : 홍길동\n");
printf("주소 : 서울시 종로구\n");
printf("전화번호 : 111-2222\n");

//3
int price;
int number;

printf("상품 가격을 입력하세요 : ");
scanf("%d", &price);
printf("상품 갯수를 입력하세요 : ");
scanf("%d", &number);

printf("총 가격은 %d입니다.\n", price * number);

//4
int age;
printf("나이를 입력하세요 : ");
scanf("%d", &age);
printf("내년이면 %d살이 되시는군요.\n\n", age + 1);

//5
float a;
float b;
float c;

printf("정수를 입력하세요 : ");
scanf("%f", &a);
printf("정수를 입력하세요 : ");
scanf("%f", &b);
printf("정수를 입력하세요 : ");
scanf("%f", &c);

float average = (a + b + c) / 3;
printf("평균은 %f입니다.\n\n", average);

//6
int ang1;
int ang2;

printf("삼각형의 내각 2개 입력\n:");
scanf("%d%d", &ang1, &ang2);
printf("세번째 각은 %d", 180 - (ang1 + ang2));
}