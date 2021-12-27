#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 1-4
int main(void)
{
	int x;

	printf("16진수 정수를 입력하시오: ");
	scanf("%x", &x);

	printf("8진수로는 %#o입니다\n", x);
	printf("10진수로는 %d입니다\n", x);
	printf("16진수로는 %#x입니다\n", x);
	
	return 0;
}


// 1-3
int main(void)
{
	double x, result;

	printf("실수를 입력하세요: ");
	scanf("%lf", &x);

	result = 3 * (x*x) + 7 * x + 11;

	printf("다항식의 값은 %lf", result);

	return 0;
}


// 1-2
int main(void)
{
	double length, height, area;

	printf("삼각형의 밑변: ");
	scanf("%lf", &length);

	printf("삼각형의 높이: ");
	scanf("%lf", &height);

	area = (length * height) / 2;

	printf("삼각형의 넓이 : %lf", area);

	return 0;
}

// 1-1
int main(void)
{
	double x, y, z, sum, avg;

	printf("실수를 입력하십시오: ");
	scanf("%lf", &x);

	printf("실수를 입력하십시오: ");
	scanf("%lf", &y);

	printf("실수를 입력하십시오: ");
	scanf("%lf", &z);

	sum = x + y + z;
	avg = sum / 3.0;

	printf("합은 %f이고 평균은 %f입니다.", sum, avg);

	return 0;
}