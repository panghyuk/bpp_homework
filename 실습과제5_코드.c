#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>






 ----------------------------------1������----------------------------
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

 ----------------------------------2������----------------------------
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


 ----------------------------------3������----------------------------
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
	printf("1���� %d������ ���� %d�Դϴ�.\n", (i - 1), sum - i);
	return 0;
}

