#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// 3-3
int main(void) {
	int num1, num2;

	printf("정수를 입력하시오: ");
	scanf("%d", &num1);
	printf("정수를 입력하시오: ");
	scanf("%d", &num2);

	if (num1 % num2 == 0)
	{
		printf("약수가 맞습니다.");
	}
	else
	{
		printf("약수가 아닙니다.");
	}

	return 0;
}


// 3-2
int main(void) {
	int x, y;
	printf("x 좌표를 입력하세요: ");
	scanf("%d", &x);
	printf("y좌표를 입력하세요: ");
	scanf("%d", &y);

	(x > 0) ? ((y > 0) ? printf("1사분면") : printf("4사분면")) : ((y > 0) ? printf("2사분면") : printf("3사분면"));

	return 0;
}



// 3-1
int main(void) {
	int num, ten, one;

	printf("정수를 입력하시오 : ");
	scanf("%d", &num);

	ten = num / 10;
	one = num % 10;

	printf("십의 자리: %d \n", ten);
	printf("일의 자리: %d", one);

	return 0;
}
