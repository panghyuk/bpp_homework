#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>






 ----------------------------------1번문제----------------------------
int main(void)
{
	int y, x;

	for (y = 0; y < 7; y++) {
		for (x = 0; x < (6 - y); x++)
			printf(" ");
		for (x = 6 - y; x < 7; x++)
			printf("*");
		printf("\n");
	}

	return 0;
}

 ----------------------------------2번문제----------------------------
int main(void)
{
	int i, j;

	for (i = 2; i <= 100; i++) {
		for (j = 2; j < i; j++) {
			if (i%j == 0) goto A;
		}
		printf("%d ", i);
	A:;
	}
	printf("\n");
	return 0;
}


 ----------------------------------3번문제----------------------------
int main(void)
{
	int i, sum;
	i = 0;
	sum = 0;
	while (1)
	{
		i++;
		sum += i;
		if (sum >= 10000)
			break;
	}
	printf("1부터 %d까지의 합이 %d입니다.\n", (i - 1), sum - i);
	return 0;
}

